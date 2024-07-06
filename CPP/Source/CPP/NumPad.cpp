// Fill out your copyright notice in the Description page of Project Settings.


#include "NumPad.h"
#include "NPDoor.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "NumpadWidget.h"

// Sets default values
ANumPad::ANumPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANumPad::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANumPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANumPad::ShowNumpadUI()
{
	if (NumpadWidgetClass)
	{
		    NumpadWidget = CreateWidget<UNumpadWidget>(GetWorld(), NumpadWidgetClass);
		if (NumpadWidget)
		{
			NumpadWidget->SetOwnerNumPad(this);
			NumpadWidget->AddToViewport();
			UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetInputMode(FInputModeUIOnly());
			UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = true;

			
		}
	}
}


void ANumPad::HideNumpadUI()
{
	if (NumpadWidget)
	{
		NumpadWidget->RemoveFromParent();
		NumpadWidget = nullptr;

		APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
		if (PlayerController)
		{
			PlayerController->bShowMouseCursor = false;
			FInputModeGameOnly InputMode;
			PlayerController->SetInputMode(InputMode);
		}
	}
}

void ANumPad::EnterCode(const FString& Code)
{
	EnteredCode = Code;
	UE_LOG(LogTemp, Warning, TEXT("Entered Code: %s"), *EnteredCode); 
	UE_LOG(LogTemp, Warning, TEXT("Correct Code: %s"), *CorrectCode); 

	if (EnteredCode == CorrectCode)
	{
		UE_LOG(LogTemp, Warning, TEXT("Correct Code Entered!"));

		
		if (Door)
		{
			Door->OpenDoor();
			UE_LOG(LogTemp, Warning, TEXT("Door Opened")); 
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Door reference is not set!")); 
		}

		
		HideNumpadUI();
	}
	else
	{
		
		UE_LOG(LogTemp, Warning, TEXT("Incorrect Code Entered."));
	}
}

