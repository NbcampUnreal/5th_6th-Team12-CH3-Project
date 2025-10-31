// Fill out your copyright notice in the Description page of Project Settings.


#include "DefMultiplySkill.h"
#include "MainCharacter.h"

ADefMultiplySkill::ADefMultiplySkill()
{
	DefIncreaseValue = 0; // ���÷� ���� 1.5�� ����
}

void ADefMultiplySkill::AttachSkill(TObjectPtr<class AMainCharacter> Character)
{
		Super::AttachSkill(Character);
		//ToDo : ĳ������ ���� ���� ���� �߰�
		Character->setMulArmor(2.f);
		//DefIncreaseValue = ���� ����ġ ���� ���
}

void ADefMultiplySkill::DetachSkill(TObjectPtr<class AMainCharacter> Character)
{
		Super::DetachSkill(Character);
		Character->setMulArmor(1.f);
}
