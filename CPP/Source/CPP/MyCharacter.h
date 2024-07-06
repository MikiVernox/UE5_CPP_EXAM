// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InterfaceCollectables.h"
#include "MyCharacter.generated.h"

UCLASS()
class CPP_API AMyCharacter : public ACharacter, public IInterfaceCollectables
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
	void Interact();

	void EquipWeapon(class ABattleRifle* Weapon);

	void StartFire();
	void StopFire();

	void SetCamouflaged(bool bIsCamouflaged, UMaterialInterface* NewMaterial, float Duration);

	bool IsCamouflaged() const;

	

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* FollowCamera;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	TSubclassOf<class ABattleRifle> BattleRifleClass;

	virtual void OnCollected() override;

	
	void SetLastCheckpointLocation(FVector NewCheckpointLocation);

	
	void RespawnAtCheckpoint();

private:

	
	TArray<UMaterialInterface*> OriginalMaterials;

	bool bCamouflaged;
	UMaterialInterface* OriginalMaterial;
	FTimerHandle CamouflageTimerHandle;

	void ResetCamouflage();


	bool bIsSprinting;
	float SprintMultiplier;

	ABattleRifle* EquippedWeapon;
	bool bIsFiring;
	FTimerHandle BurstTimerHandle;

	void BurstFire();

	FVector LastCheckpointLocation;
};
