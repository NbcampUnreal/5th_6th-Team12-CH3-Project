// Fill out your copyright notice in the Description page of Project Settings.


#include "InfiniteSpeedSkill.h"

void AInfiniteSpeedSkill::AttachSkill(TObjectPtr<class AMainCharacter> Character)
{
	Super::AttachSkill(Character);
	// ĳ���� ���׹̳� ���Ѵ� ���� �߰�
}

void AInfiniteSpeedSkill::DetachSkill(TObjectPtr<class AMainCharacter> Character)
{
	Super::DetachSkill(Character);
	// ĳ���� ���׹̳� ���󺹱� ���� �߰�
}
