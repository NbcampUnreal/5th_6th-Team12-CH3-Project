// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "Components/Button.h"
#include "MyGameInstance.h"

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();

    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        PC->bShowMouseCursor = true;
    }

    if (GameStart)
    {
        GameStart->OnClicked.AddDynamic(this, &UMainMenu::StartButtonClick);
    }
}

void UMainMenu::StartButtonClick()
{
    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        APawn* PlayerPawn = PC->GetPawn();

        PC->SetViewTargetWithBlend(PlayerPawn, 1.0f);
        Cast<UMyGameInstance>(GetGameInstance())->TurnOnHud(HudPreset::InGame);
        PC->SetInputMode(FInputModeGameOnly());
        PC->bShowMouseCursor = false;

    }

    RemoveFromParent();
}
