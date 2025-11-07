// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "Components/Button.h"
#include "MyGameInstance.h"
#include "Kismet/KismetSystemLibrary.h"


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

    if (GameExit)
    {
        GameExit->OnClicked.AddDynamic(this, &UMainMenu::ExitButtonClick);
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

void UMainMenu::ExitButtonClick()
{
    UWorld* currentWorld = GetWorld();
    UKismetSystemLibrary::QuitGame(currentWorld, currentWorld->GetFirstPlayerController(),
        EQuitPreference::Quit, false);
}
