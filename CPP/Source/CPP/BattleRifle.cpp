// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleRifle.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "MyCharacter.h"

// Sets default values
ABattleRifle::ABattleRifle()
{
    PrimaryActorTick.bCanEverTick = true;

    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;
    MeshComponent->SetVisibility(true); // Ensure mesh is visible

    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->SetupAttachment(RootComponent);
    CollisionComponent->SetSphereRadius(50.f);
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ABattleRifle::OnOverlapBegin);
}

void ABattleRifle::BeginPlay()
{
    Super::BeginPlay();
    MeshComponent->SetVisibility(true); // Ensure mesh is visible
}

void ABattleRifle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABattleRifle::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor != this)
    {
        AMyCharacter* MyCharacter = Cast<AMyCharacter>(OtherActor);
        if (MyCharacter)
        {
            UE_LOG(LogTemp, Warning, TEXT("Weapon Overlapped with Character"));
            MyCharacter->EquipWeapon(this);
            
            
            SetActorHiddenInGame(true);
            SetActorEnableCollision(false);
            //SetLifeSpan(5.0f); // Destroy the actor after 5 seconds
            Destroy();
        }
    }
}