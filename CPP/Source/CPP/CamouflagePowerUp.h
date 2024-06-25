// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CamouflagePowerUp.generated.h"

UCLASS()
class CPP_API ACamouflagePowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACamouflagePowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UBoxComponent* CollisionComponent;

	UPROPERTY(EditAnywhere, Category = "Camouflage")
	float CamouflageDuration;

	UPROPERTY(EditAnywhere, Category = "Camouflage")
	UMaterialInterface* CamouflageMaterial;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
