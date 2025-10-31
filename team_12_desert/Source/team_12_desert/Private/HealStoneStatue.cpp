// Fill out your copyright notice in the Description page of Project Settings.


#include "HealStoneStatue.h"
#include "MainCharacter.h"

AHealStoneStatue::AHealStoneStatue()
{
	HealAmount = 50;
	Duration = 1.f;
	DestroyDuration = 5.1f;
	PlayerCharacter = nullptr;
	bIsActive = false;
	ItemType = "HealStoneStatue";
}

void AHealStoneStatue::ActivateItem(TObjectPtr<AActor> Actor)
{
	if (IsValid(Actor)) 
	{
		if (PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("characteroverlap"));


			GetWorld()->GetTimerManager().SetTimer(
				HealTimer,
				this,
				&AHealStoneStatue::Heal,
				Duration,
				true);

			if (!bIsActive)
			{
				bIsActive = true;
				GetWorld()->GetTimerManager().SetTimer(
					DestroyTimer,
					this,
					&AHealStoneStatue::DestroyItem,
					DestroyDuration,
					false);
			}
		}
	}
}

void AHealStoneStatue::DeactivateItem(TObjectPtr<AActor> Actor)
{
	PlayerCharacter = nullptr;
}

void AHealStoneStatue::Heal()
{
	if (PlayerCharacter == nullptr) return;
	PlayerCharacter->HealHP(HealAmount);
	UE_LOG(LogTemp, Display, TEXT("Heal!"));
}

void AHealStoneStatue::DestroyItem()
{
	UE_LOG(LogTemp, Display, TEXT("Destroy!"));
	Destroy();
}

AHealStoneStatue::~AHealStoneStatue()
{
}

