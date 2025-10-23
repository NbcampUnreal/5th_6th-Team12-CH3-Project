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
			// ���� ĳ������ ���� Hp�� �ƽ� Hp�� ������ �����ϵ��� ���� ��û
		}
	}
	Destroy();
}

AHealItem::~AHealItem()
{

}
