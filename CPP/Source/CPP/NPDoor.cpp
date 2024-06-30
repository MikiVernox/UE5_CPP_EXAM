// Fill out your copyright notice in the Description page of Project Settings.


#include "NPDoor.h"

// Sets default values
ANPDoor::ANPDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = DoorMesh;

	bIsOpen = false;

}

// Called when the game starts or when spawned
void ANPDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ANPDoor::OpenDoor()
{
	FRotator NewRotation = FRotator(0.f, 90.f, 0.f);
    DoorMesh->SetRelativeRotation(NewRotation);
	bIsOpen = true;
}

void ANPDoor::CloseDoor()
{
	if (bIsOpen)
	{
		FRotator NewRotation = FRotator(0.f, 0.f, 0.f);
		DoorMesh->SetRelativeRotation(NewRotation);
		bIsOpen = false;
	}
}