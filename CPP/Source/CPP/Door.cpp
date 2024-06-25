// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = DoorMesh;

	bIsOpen = false;
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::OpenDoor()
{
    if (!bIsOpen)
    {
        // Implement door opening logic (e.g., changing location or rotation)
        DoorMesh->SetRelativeLocation(FVector(0.f, 0.f, 200.f)); // Example: move door up
        bIsOpen = true;
    }
}

void ADoor::CloseDoor()
{
    if (bIsOpen)
    {
        // Implement door closing logic (e.g., changing location or rotation)
        DoorMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f)); // Example: move door down
        bIsOpen = false;
    }
}