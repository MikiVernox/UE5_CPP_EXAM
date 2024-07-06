// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "MyCharacter.h"

AMyGameModeBase::AMyGameModeBase()
{
    // Set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/BP_MyCharacter"));
    if (PlayerPawnBPClass.Class != nullptr)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }

   
    SpawnLocation = FVector(0.0f, 0.0f, 500.0f);
    SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
}

void AMyGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    if (PlayerPawnClass)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        SpawnParams.Instigator = GetInstigator();

        AMyCharacter* SpawnedPawn = GetWorld()->SpawnActor<AMyCharacter>(PlayerPawnClass, SpawnLocation, SpawnRotation, SpawnParams);

        if (SpawnedPawn)
        {
            APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
            if (PlayerController)
            {
                PlayerController->Possess(SpawnedPawn);
            }
        }
    }
}