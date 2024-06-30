// Fill out your copyright notice in the Description page of Project Settings.


#include "PressurePlate.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Block.h"
#include "Door.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APressurePlate::APressurePlate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    PlateMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlateMesh"));
    RootComponent = PlateMesh;

    TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolume"));
    TriggerVolume->SetupAttachment(RootComponent);

    TriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &APressurePlate::OnOverlapBegin);
    TriggerVolume->OnComponentEndOverlap.AddDynamic(this, &APressurePlate::OnOverlapEnd);

    bBlockOnPlate = false;
}

// Called when the game starts or when spawned
void APressurePlate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APressurePlate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (bBlockOnPlate)
    {
        // Open door logic
        //UE_LOG(LogTemp, Warning, TEXT("Block is on the plate. Open the door."));
    }
    else
    {
        // Close door logic
        //UE_LOG(LogTemp, Warning, TEXT("Block is not on the plate. Close the door."));
    }

    if (bBlockOnPlate)
    {
        if (Door)
        {
            Door->OpenDoor();
        }
    }
    else
    {
        if (Door)
        {
            Door->CloseDoor();
        }
    }
}

void APressurePlate::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && (OtherActor != this) && OtherComp)
    {
        if (OtherActor->IsA(ABlock::StaticClass()))
        {
            bBlockOnPlate = true;
        }
    }
}

void APressurePlate::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor && (OtherActor != this) && OtherComp)
    {
        if (OtherActor->IsA(ABlock::StaticClass()))
        {
            bBlockOnPlate = false;
        }
    }
}

