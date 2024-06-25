// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "BattleRifle.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    bIsSprinting = false;
    SprintMultiplier = 2.0f;
    bIsFiring = false;

    // Create a camera boom (pulls in towards the player if there is a collision)
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character
    CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

    // Create a follow camera
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom
    FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm


    GetCharacterMovement()->MaxWalkSpeed = 600.0f; // Default walking speed
    GetCharacterMovement()->MaxAcceleration = 2048.0f; // Default acceleration
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
    Super::BeginPlay();

    // Store the original materials of the mesh
    int32 NumMaterials = GetMesh()->GetNumMaterials();
    for (int32 i = 0; i < NumMaterials; ++i)
    {
        UMaterialInterface* Mat = GetMesh()->GetMaterial(i);
        OriginalMaterials.Add(Mat);
    }

}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::StartJump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyCharacter::StopJump);
    PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMyCharacter::StartSprint);
    PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMyCharacter::StopSprint);

    // Camera controls
    PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

    // Weapon controls
    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMyCharacter::StartFire);
    PlayerInputComponent->BindAction("Fire", IE_Released, this, &AMyCharacter::StopFire);
}

void AMyCharacter::MoveForward(float Value)
{
    if (Controller && Value != 0.0f)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direction, Value * (bIsSprinting ? SprintMultiplier : 1.0f));
    }
}

void AMyCharacter::MoveRight(float Value)
{
    if (Controller && Value != 0.0f)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        AddMovementInput(Direction, Value * (bIsSprinting ? SprintMultiplier : 1.0f));
    }
}

void AMyCharacter::StartJump()
{
    bPressedJump = true;
}

void AMyCharacter::StopJump()
{
    bPressedJump = false;
}

void AMyCharacter::StartSprint()
{
    bIsSprinting = true;
}

void AMyCharacter::StopSprint()
{
    bIsSprinting = false;
}


void AMyCharacter::EquipWeapon(class ABattleRifle* Weapon)
{
    if (Weapon)
    {
        //UE_LOG(LogTemp, Warning, TEXT("Equipping Weapon"));
        EquippedWeapon = Weapon;
        FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
        Weapon->AttachToComponent(GetMesh(), AttachmentRules, TEXT("WeaponSocket"));
        Weapon->SetOwner(this);
        Weapon->SetActorHiddenInGame(false);
        Weapon->SetActorEnableCollision(false); // Disable collision once equipped
        //UE_LOG(LogTemp, Warning, TEXT("Weapon Attached to: %s"), *Weapon->GetName());
    }
}

void AMyCharacter::StartFire()
{
    if (EquippedWeapon && !bIsFiring)
    {
        bIsFiring = true;
        BurstFire();
    }
}

void AMyCharacter::StopFire()
{
    bIsFiring = false;
    GetWorldTimerManager().ClearTimer(BurstTimerHandle);
}

void AMyCharacter::BurstFire()
{
    if (!bIsFiring) return;

    // Implement raycast logic here for each burst shot
    FHitResult Hit;
    FVector Start = FollowCamera->GetComponentLocation();
    FVector ForwardVector = FollowCamera->GetForwardVector();
    FVector End = ((ForwardVector * 2000.f) + Start);
    FCollisionQueryParams CollisionParams;

    if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, CollisionParams))
    {
        if (Hit.bBlockingHit)
        {
            // Process hit actor
            if (AActor* HitActor = Hit.GetActor())
            {
                // Apply damage or any other logic
            }
        }
    }

    // Repeat burst fire
    GetWorldTimerManager().SetTimer(BurstTimerHandle, this, &AMyCharacter::BurstFire, 0.1f, false, 0.1f);
}


void AMyCharacter::ActivateCamouflage(UMaterialInterface* CamouflageMat, float Duration)
{
    if (CamouflageMat && !CamouflageMaterial)
    {
        CamouflageMaterial = UMaterialInstanceDynamic::Create(CamouflageMat, this);
    }

    if (CamouflageMaterial)
    {
        int32 NumMaterials = GetMesh()->GetNumMaterials();
        for (int32 i = 0; i < NumMaterials; ++i)
        {
            GetMesh()->SetMaterial(i, CamouflageMaterial);
        }

        GetWorldTimerManager().SetTimer(CamouflageTimerHandle, this, &AMyCharacter::DeactivateCamouflage, Duration, false);
    }
}

void AMyCharacter::DeactivateCamouflage()
{
    int32 NumMaterials = GetMesh()->GetNumMaterials();
    for (int32 i = 0; i < NumMaterials; ++i)
    {
        if (OriginalMaterials.IsValidIndex(i))
        {
            GetMesh()->SetMaterial(i, OriginalMaterials[i]);
        }
    }


}