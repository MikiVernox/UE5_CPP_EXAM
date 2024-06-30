// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NumPad.generated.h"

class UNumpadWidget;
class ADoor;

UCLASS()
class CPP_API ANumPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANumPad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UNumpadWidget* NumpadWidget;
	FString EnteredCode;

	
public:
	UFUNCTION(BlueprintCallable, Category = "NumPad")
	void EnterCode(const FString& Code);

	void HideNumpadUI();

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> NumpadWidgetClass;


	UPROPERTY(EditAnywhere)
	FString CorrectCode;
	
	UPROPERTY(EditAnywhere, Category = "Door")
	class ANPDoor* Door;

	void ShowNumpadUI();
};
