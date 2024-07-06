// Fill out your copyright notice in the Description page of Project Settings.


#include "NumpadWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "NumPad.h"





void UNumpadWidget::NativeConstruct()
{
    Super::NativeConstruct();
    UE_LOG(LogTemp, Warning, TEXT("NativeConstruct called"));
    BindButtonEvents();
    UpdateCodeDisplay();
}


void UNumpadWidget::BindButtonEvents()
{
    if (Button_1) Button_1->OnClicked.AddUniqueDynamic(this, &UNumpadWidget::OnButton1Clicked);
    if (Button_2) Button_2->OnClicked.AddUniqueDynamic(this, &UNumpadWidget::OnButton2Clicked);
    if (Button_3) Button_3->OnClicked.AddUniqueDynamic(this, &UNumpadWidget::OnButton3Clicked);
    if (Button_4) Button_4->OnClicked.AddUniqueDynamic(this, &UNumpadWidget::OnButton4Clicked);
    if (Button_5) Button_5->OnClicked.AddUniqueDynamic(this, &UNumpadWidget::OnButton5Clicked);
    if (Button_6) Button_6->OnClicked.AddUniqueDynamic(this, &UNumpadWidget::OnButton6Clicked);
    if (Button_7) Button_7->OnClicked.AddUniqueDynamic(this, &UNumpadWidget::OnButton7Clicked);
    if (Button_8) Button_8->OnClicked.AddUniqueDynamic(this, &UNumpadWidget::OnButton8Clicked);
    if (Button_9) Button_9->OnClicked.AddUniqueDynamic(this, &UNumpadWidget::OnButton9Clicked);
    if (Button_Del) Button_Del->OnClicked.AddUniqueDynamic(this, &UNumpadWidget::OnButtonDelClicked);
}

void UNumpadWidget::OnButton1Clicked() { HandleButtonClick("1"); }
void UNumpadWidget::OnButton2Clicked() { HandleButtonClick("2"); }
void UNumpadWidget::OnButton3Clicked() { HandleButtonClick("3"); }
void UNumpadWidget::OnButton4Clicked() { HandleButtonClick("4"); }
void UNumpadWidget::OnButton5Clicked() { HandleButtonClick("5"); }
void UNumpadWidget::OnButton6Clicked() { HandleButtonClick("6"); }
void UNumpadWidget::OnButton7Clicked() { HandleButtonClick("7"); }
void UNumpadWidget::OnButton8Clicked() { HandleButtonClick("8"); }
void UNumpadWidget::OnButton9Clicked() { HandleButtonClick("9"); }


void UNumpadWidget::OnButtonDelClicked()
{
    if (!EnteredCode.IsEmpty())
    {
        EnteredCode.RemoveAt(EnteredCode.Len() - 1);
        UE_LOG(LogTemp, Warning, TEXT("Entered Code: %s"), *EnteredCode);
        UpdateCodeDisplay();
    }

    if (OwnerNumPad)
    {
        OwnerNumPad->EnterCode(EnteredCode);
    }
}



void UNumpadWidget::HandleButtonClick(FString ButtonNumber)
{
    EnteredCode.Append(ButtonNumber);
    UE_LOG(LogTemp, Warning, TEXT("Entered Code: %s"), *EnteredCode);
    UpdateCodeDisplay();

    if (OwnerNumPad)
    {
        OwnerNumPad->EnterCode(EnteredCode);
    }
}

void UNumpadWidget::UpdateCodeDisplay()
{
    if (CodeDisplay)
    {
        CodeDisplay->SetText(FText::FromString(EnteredCode)); 
    }
}

void UNumpadWidget::SetOwnerNumPad(ANumPad* Owner)
{
    OwnerNumPad = Owner;
}