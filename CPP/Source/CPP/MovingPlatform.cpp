// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Curves/CurveFloat.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	RootComponent = PlatformMesh;

	Timeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));

	StartLocation = FVector(0.f, 0.f, 0.f);
	EndLocation = FVector(0.f, 0.f, 400.f);
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	if (MovementCurve)
	{
		InterpFunction.BindUFunction(this, FName("OnTimelineFloatReturn"));
		Timeline->AddInterpFloat(MovementCurve, InterpFunction);
		Timeline->SetLooping(true);
		Timeline->PlayFromStart();
	}

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Timeline->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);
}

void AMovingPlatform::OnTimelineFloatReturn(float Value)
{
	FVector NewLocation = FMath::Lerp(StartLocation, EndLocation, Value);
	SetActorLocation(NewLocation);
}
