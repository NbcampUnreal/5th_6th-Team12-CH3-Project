// Fill out your copyright notice in the Description page of Project Settings.


#include "DieUi.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "MyGameState.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UDieUi::NativeConstruct()
{
	Super::NativeConstruct();

	UGameplayStatics::SetGamePaused(GetWorld(), true);

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		PC->bShowMouseCursor = true;
	}

	if (ReStart)
	{
		ReStart->OnClicked.AddDynamic(this, &UDieUi::RestartButton);
	}

	if (GameExit)
	{
		GameExit->OnClicked.AddDynamic(this, &UDieUi::ExitButton);
	}

	if (KillCount) {
		KillCount->SetText(FText::AsNumber(Cast<AMyGameState>(GetWorld()->GetGameState())->GetMonsterCount()));
	}


	if (Time) {
		float Remain = Cast<AMyGameState>(GetWorld()->GetGameState())->GetReamingTime();

		FNumberFormattingOptions NumberFormat;
		NumberFormat.MinimumFractionalDigits = 1;
		NumberFormat.MaximumFractionalDigits = 1;
		Time->SetText(FText::AsNumber(Remain, &NumberFormat));
	}
}

void UDieUi::RestartButton()
{
	UGameplayStatics::SetGamePaused(GetWorld(), false);
	APlayerController* PC = GetWorld()->GetFirstPlayerController();

	if (PC) {
		PC->SetInputMode(FInputModeGameOnly());
		PC->bShowMouseCursor = false;
	}
	Cast<UMyGameInstance>(GetGameInstance())->TurnOffHud(HudPreset::Die);

	Cast<UMyGameInstance>(GetGameInstance())->RestartLev();
}

void UDieUi::ExitButton()
{
	UWorld* currentWorld = GetWorld();
	UKismetSystemLibrary::QuitGame(currentWorld, currentWorld->GetFirstPlayerController(),
		EQuitPreference::Quit, false);
}
