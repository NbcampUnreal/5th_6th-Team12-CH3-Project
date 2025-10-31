// Fill out your copyright notice in the Description page of Project Settings.


#include "InfiniteSpeedSkill.h"
#include "MainCharacter.h"

void AInfiniteSpeedSkill::AttachSkill(TObjectPtr<class AMainCharacter> Character)
{
	Super::AttachSkill(Character);
	// 캐릭터 스테미나 무한대 로직 추가
	Character->setIsDashSkill(true);
}

void AInfiniteSpeedSkill::DetachSkill(TObjectPtr<class AMainCharacter> Character)
{
	Super::DetachSkill(Character);
	Character->setIsDashSkill(false);
	// 캐릭터 스테미나 원상복구 로직 추가
}
