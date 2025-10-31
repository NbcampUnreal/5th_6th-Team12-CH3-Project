// Fill out your copyright notice in the Description page of Project Settings.


#include "DefMultiplySkill.h"
#include "MainCharacter.h"

ADefMultiplySkill::ADefMultiplySkill()
{
	DefIncreaseValue = 0; // 예시로 방어력 1.5배 증가
}

void ADefMultiplySkill::AttachSkill(TObjectPtr<class AMainCharacter> Character)
{
		Super::AttachSkill(Character);
		//ToDo : 캐릭터의 방어력 증가 로직 추가
		Character->setMulArmor(2.f);
		//DefIncreaseValue = 방어력 증가치 차액 계산
}

void ADefMultiplySkill::DetachSkill(TObjectPtr<class AMainCharacter> Character)
{
		Super::DetachSkill(Character);
		Character->setMulArmor(1.f);
}
