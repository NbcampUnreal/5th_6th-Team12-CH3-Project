// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "MyGameState.h"
#include "Blueprint/UserWidget.h"
#include "MainCharacterHunter.h"
#include "Kismet/GameplayStatics.h"

UMyGameInstance::UMyGameInstance()
{
	UE_LOG(LogTemp, Warning, TEXT("MyGameInsta"));
	CurrentLevelIndex = 0;
}

void UMyGameInstance::PlayerStatSave()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		AMainCharacterHunter* tempChar = Cast<AMainCharacterHunter>(PC->GetPawn());
		if (tempChar)
		{
			Hp = tempChar->getCurrentHP();
			MaxHp = tempChar->getMaxHP();
			Stamina = tempChar->getCurrentStamina();
			MaxStamina = tempChar->getMaxStamina();
			Level = tempChar->getCurrentLevel();
			CharacterDamage = tempChar->getBaseDamage();
			MulDamage = tempChar->getMulDamage();
			CharacterArmor = tempChar->getCharacterArmor();
			MulArmor = tempChar->getMulArmor();
			Exp = tempChar->getCurrentExperience();
		}
	}
}

void UMyGameInstance::PlayerStatLoad()
{
	if (MaxHp == 0) {
		return;
	}
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		AMainCharacterHunter* tempChar = Cast<AMainCharacterHunter>(PC->GetPawn());
		if (tempChar)
		{
			tempChar->setCurrentHP(Hp);
			tempChar->setMaxHP(MaxHp);
			tempChar->setCurrentStamina(Stamina);
			tempChar->setMaxStamina(MaxStamina);
			tempChar->setCurrentLevel(Level);
			tempChar->setBaseDamage(CharacterDamage);
			tempChar->setBaseArmor(CharacterArmor);
			tempChar->setCurrentExperience(Exp);
			tempChar->setMulDamage(MulDamage);
			tempChar->setMulArmor(MulArmor);
		}
	}

}

void UMyGameInstance::TurnOffHud(HudPreset off)
{
	//HUDWidgetInstance = CreateWidget<UUserWidget>(this, HudWidgetClass[off]);
	if (HUDWidgetInstance[off]&&HUDWidgetInstance[off]) {
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
		if (on == HudPreset::InGame)
			PlayerHUDApply();
		return;
	}

	if (HudWidgetClass.Num() > 0 && HudWidgetClass[on] != nullptr) {
		HUDWidgetInstance[on] = CreateWidget<UUserWidget>(this, HudWidgetClass[on]);
		if (HUDWidgetInstance[on]) {
			HUDWidgetInstance[on]->AddToViewport();
		}
	}
	if (on == HudPreset::InGame)
		PlayerHUDApply();
}

UUserWidget* UMyGameInstance::GetHUDWidget(HudPreset preset)
{
	if (HUDWidgetInstance.Num() > 0) {
		return HUDWidgetInstance[preset];
	}
	return nullptr;

}

void UMyGameInstance::PlayerHUDApply()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		AMainCharacterHunter* tempChar = Cast<AMainCharacterHunter>(PC->GetPawn());
		if (tempChar)
		{
			Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateHpHud(tempChar->getMaxHP(), tempChar->getCurrentHP());
			Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateStaminaHud(tempChar->getMaxStamina(), tempChar->getCurrentStamina());
		}
	}

}

void UMyGameInstance::NextLevel()
{
	CurrentLevelIndex++;
	Cast<AMyGameState>(GetWorld()->GetGameState())->SetMonsterCount(0);

	PlayerStatSave();
	UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);

	for (int i = 0; i < HUDWidgetInstance.Num(); i++) {
		if (HUDWidgetInstance[i] && HUDWidgetInstance[i]) {
			HUDWidgetInstance[i]->RemoveFromViewport();			
		}
	}
	HUDWidgetInstance.Empty();
}

void UMyGameInstance::TestIns()
{

}

float UMyGameInstance::GetLevelTime()
{
	return LevelTime;
}

