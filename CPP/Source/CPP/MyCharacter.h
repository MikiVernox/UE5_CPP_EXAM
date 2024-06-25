// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class CPP_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void StartJump();
	void StopJump();
	void StartSprint();
	void StopSprint();


	void EquipWeapon(class ABattleRifle* Weapon);

	void StartFire();
	void StopFire();

	// Function to activate camouflage
	void ActivateCamouflage(UMaterialInterface* CamouflageMat, float Duration);

	// Function to deactivate camouflage
	void DeactivateCamouflage();

	// New components for camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* FollowCamera;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	TSubclassOf<class ABattleRifle> BattleRifleClass;

private:

	// Array to store the original materials
	TArray<UMaterialInterface*> OriginalMaterials;

	// The dynamic instance of the camouflage material
	UPROPERTY()
	UMaterialInstanceDynamic* CamouflageMaterial;

	// Timer handle for the camouflage duration
	FTimerHandle CamouflageTimerHandle;



	bool bIsSprinting;
	float SprintMultiplier;

	ABattleRifle* EquippedWeapon;
	bool bIsFiring;
	FTimerHandle BurstTimerHandle;

	void BurstFire();
};
