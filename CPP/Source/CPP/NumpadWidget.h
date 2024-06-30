// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NumpadWidget.generated.h"

class ANumPad;
class UButton;
class UTextBlock;

UCLASS()
class CPP_API UNumpadWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    virtual void NativeConstruct() override;

    //UFUNCTION()
    //void OnButtonClicked();

    void SetOwnerNumPad(ANumPad* Owner);

    UFUNCTION()
    void OnButton1Clicked();

    UFUNCTION()
    void OnButton2Clicked();

    UFUNCTION()
    void OnButton3Clicked();

    UFUNCTION()
    void OnButton4Clicked();

    UFUNCTION()
    void OnButton5Clicked();

    UFUNCTION()
    void OnButton6Clicked();

    UFUNCTION()
    void OnButton7Clicked();

    UFUNCTION()
    void OnButton8Clicked();

    UFUNCTION()
    void OnButton9Clicked();

    UFUNCTION()
    void OnButtonDelClicked();

   

    void HandleButtonClick(FString ButtonNumber);

private:
    void BindButtonEvents();

    FString EnteredCode;
    ANumPad* OwnerNumPad;
    UButton* ClickedButton;
    UButton* LastClickedButton;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_1;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_2;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_3;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_4;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_5;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_6;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_7;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_8;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_9;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_0;

    UPROPERTY(meta = (BindWidget))
    UButton* Button_Del;
public:
    UPROPERTY(meta = (BindWidget))
    UTextBlock* CodeDisplay;

    void UpdateCodeDisplay();
};
