// Fill out your copyright notice in the Description page of Project Settings.


#include "DefMultiplySkill.h"

ADefMultiplySkill::ADefMultiplySkill()
{
	DefIncreaseValue = 0; // ���÷� ���� 1.5�� ����
}

void ADefMultiplySkill::AttachSkill(TObjectPtr<class AMainCharacter> Character)
{
		Super::AttachSkill(Character);
		//ToDo : ĳ������ ���� ���� ���� �߰�
		//DefIncreaseValue = ���� ����ġ ���� ���
}

void ADefMultiplySkill::DetachSkill(TObjectPtr<class AMainCharacter> Character)
{
		Super::DetachSkill(Character);
		//ToDo : ĳ������ ���� ���󺹱� ���� �߰�
		//DefIncreaseValue ��ŭ ���� ����
}
