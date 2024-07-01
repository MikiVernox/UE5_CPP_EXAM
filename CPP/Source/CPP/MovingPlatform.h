// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "MovingPlatform.generated.h"

UCLASS()
class CPP_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PlatformMesh;

	UPROPERTY(VisibleAnywhere)
	UTimelineComponent* Timeline;

	UPROPERTY(EditAnywhere, Category = "Movement")
	UCurveFloat* MovementCurve;

	UPROPERTY(EditAnywhere, Category = "Movement")
	FVector StartLocation;

	UPROPERTY(EditAnywhere, Category = "Movement")
	FVector EndLocation;

	UFUNCTION()
	void OnTimelineFloatReturn(float Value);

private:
	FOnTimelineFloat InterpFunction{};
};
