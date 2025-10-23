// Fill out your copyright notice in the Description page of Project Settings.


#include "HealItem.h"
#include "MainCharacter.h"

AHealItem::AHealItem()
{
	HealAmount = 30;
}

void AHealItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	UE_LOG(LogTemp, Display, TEXT("overlap"));
	if (IsValid(Actor))
	{
		if (TObjectPtr<AMainCharacter> PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("CompleteCast"));
			// 추후 캐릭터의 현재 Hp와 맥스 Hp에 접근이 가능하도록 수정 요청
		}
	}
	Destroy();
}

AHealItem::~AHealItem()
{

}
