// Fill out your copyright notice in the Description page of Project Settings.


#include "InfiniteSpeedSkill.h"
#include "MainCharacter.h"

void AInfiniteSpeedSkill::AttachSkill(TObjectPtr<class AMainCharacter> Character)
{
	Super::AttachSkill(Character);
	// ĳ���� ���׹̳� ���Ѵ� ���� �߰�
	Character->setIsDashSkill(true);
}

void AInfiniteSpeedSkill::DetachSkill(TObjectPtr<class AMainCharacter> Character)
{
	Super::DetachSkill(Character);
	Character->setIsDashSkill(false);
	// ĳ���� ���׹̳� ���󺹱� ���� �߰�
}
