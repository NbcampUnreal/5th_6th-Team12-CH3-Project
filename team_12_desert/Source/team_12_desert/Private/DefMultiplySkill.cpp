// Fill out your copyright notice in the Description page of Project Settings.


#include "DefMultiplySkill.h"

ADefMultiplySkill::ADefMultiplySkill()
{
	DefIncreaseValue = 0; // 예시로 방어력 1.5배 증가
}

void ADefMultiplySkill::AttachSkill(TObjectPtr<class AMainCharacter> Character)
{
		Super::AttachSkill(Character);
		//ToDo : 캐릭터의 방어력 증가 로직 추가
		//DefIncreaseValue = 방어력 증가치 차액 계산
}

void ADefMultiplySkill::DetachSkill(TObjectPtr<class AMainCharacter> Character)
{
		Super::DetachSkill(Character);
		//ToDo : 캐릭터의 방어력 원상복구 로직 추가
		//DefIncreaseValue 만큼 방어력 감소
}
