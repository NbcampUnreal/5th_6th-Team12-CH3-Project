// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "MyGameState.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

UMyGameInstance::UMyGameInstance()
{
	UE_LOG(LogTemp, Warning, TEXT("MyGameInsta"));
	CurrentLevelIndex = 0;
}

void UMyGameInstance::PlayerStatSave()
{
}

void UMyGameInstance::PlayerStatLoad()
{
}

void UMyGameInstance::TurnOffHud(HudPreset off)
{
	//HUDWidgetInstance = CreateWidget<UUserWidget>(this, HudWidgetClass[off]);
	if (HUDWidgetInstance[off]) {
		HUDWidgetInstance[off]->RemoveFromViewport();
	}
}

void UMyGameInstance::TurnOnHud(HudPreset on)
{

	if (HUDWidgetInstance.Num() <= 0) {
		HUDWidgetInstance.SetNum(HudWidgetClass.Num());
	}

	if (HUDWidgetInstance.IsValidIndex(on) && HUDWidgetInstance[on])
	{
		HUDWidgetInstance[on]->AddToViewport();
		Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateHud();

		return;
	}

	if (HudWidgetClass.Num() > 0 && HudWidgetClass[on] != nullptr) {
		HUDWidgetInstance[on] = CreateWidget<UUserWidget>(this, HudWidgetClass[on]);
		if (HUDWidgetInstance[on]) {
			HUDWidgetInstance[on]->AddToViewport();
		}
	}
	Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateHud();

}

UUserWidget* UMyGameInstance::GetHUDWidget(HudPreset preset)
{
	if (HUDWidgetInstance.Num() > 0) {
		return HUDWidgetInstance[preset];
	}
	return nullptr;

}

void UMyGameInstance::NextLevel()
{
	CurrentLevelIndex++;
	Cast<AMyGameState>(GetWorld()->GetGameState())->SetMonsterCount(0);

	PlayerStatSave();
	UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);

}

void UMyGameInstance::TestIns()
{

}

