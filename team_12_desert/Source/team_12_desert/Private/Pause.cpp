// Fill out your copyright notice in the Description page of Project Settings.


#include "Pause.h"
#include "Components/Button.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UPause::NativeConstruct()
{
	Super::NativeConstruct();

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		PC->bShowMouseCursor = true;
	}

	if (Resume)
	{
		Resume->OnClicked.AddDynamic(this, &UPause::ResumeButtonClick);
	}

	if (GameExit)
	{
		GameExit->OnClicked.AddDynamic(this, &UPause::PauseExitButtonClick);
	}

}

void UPause::ResumeButtonClick()
{
	UGameplayStatics::SetGamePaused(GetWorld(), false);
	APlayerController* PC = GetWorld()->GetFirstPlayerController();

	if (PC) {
		PC->SetInputMode(FInputModeGameOnly());
		PC->bShowMouseCursor = false;
	}	
	Cast<UMyGameInstance>(GetGameInstance())->TurnOffHud(HudPreset::Pause);
}

void UPause::PauseExitButtonClick()
{
	UWorld* currentWorld = GetWorld();
	UKismetSystemLibrary::QuitGame(currentWorld, currentWorld->GetFirstPlayerController(),
		EQuitPreference::Quit, false);
}
