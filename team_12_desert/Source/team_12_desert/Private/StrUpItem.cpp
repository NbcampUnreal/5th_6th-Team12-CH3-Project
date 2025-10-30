// Fill out your copyright notice in the Description page of Project Settings.


#include "StrUpItem.h"
#include "MainCharacter.h"

AStrUpItem::AStrUpItem()
{
	StrUpAmount = 30;
	Duration = 3;
	PlayerCharacter = nullptr;
	ItemType = "StrUp";
}

void AStrUpItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	if (IsValid(Actor)) //ĳ���Ͱ� �����ϴ����� Ȯ���� �ٸ� ĳ���� �̿ܿ��� �ν��� �����ʵ��� üũ ���־���ҰͰ���
	{
		if (PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("PlayerDamage Before BackUp : %d"), PlayerCharacter->getCharacterDamage());
			// 25.10.30. mpyi _ CharacterDamage ������ ������������ ���� ���͸� �̿��� ���̽� ����� �������� ����
			// �ʿ�� ���̽� ������� �ƴ϶� mulDamage �������� �ٲ�� �� ���ɼ� ����
			// PlayerCharacter->CharacterDamage += StrUpAmount;
			PlayerCharacter->setBaseDamage(PlayerCharacter->getBaseDamage() + StrUpAmount);
			UE_LOG(LogTemp, Display, TEXT("PlayerDamage After BackUp : %d"), PlayerCharacter->getCharacterDamage());

			SetActorHiddenInGame(true);
			SetActorEnableCollision(false);
			SetActorTickEnabled(false);


			GetWorld()->GetTimerManager().SetTimer(
				TimerHandle,
				this,
				&AStrUpItem::BackUpStr,
				Duration,
				false);
		}
	}
}

void AStrUpItem::BackUpStr()
{
	if (IsValid(PlayerCharacter))
	{
		UE_LOG(LogTemp, Display, TEXT("PlayerDamage Before BackUp : %d"), PlayerCharacter->getCharacterDamage());
		// 25.10.30. mpyi _ CharacterDamage ������ ������������ ���� ���͸� �̿��� ���̽� ����� �������� ����
		// �ʿ�� ���̽� ������� �ƴ϶� mulDamage �������� �ٲ�� �� ���ɼ� ����
		// PlayerCharacter->CharacterDamage -= StrUpAmount;
		PlayerCharacter->setBaseDamage(PlayerCharacter->getBaseDamage() - StrUpAmount);
		UE_LOG(LogTemp, Display, TEXT("PlayerDamage After BackUp : %d"), PlayerCharacter->getCharacterDamage());
	}
	Destroy();
}

AStrUpItem::~AStrUpItem()
{
}

