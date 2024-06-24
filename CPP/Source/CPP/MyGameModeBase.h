// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CPP_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
    AMyGameModeBase();

    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    TSubclassOf<class AMyCharacter> PlayerPawnClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    FVector SpawnLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    FRotator SpawnRotation;


};
