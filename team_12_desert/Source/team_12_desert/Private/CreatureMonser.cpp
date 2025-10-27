// Fill out your copyright notice in the Description page of Project Settings.


#include "CreatureMonser.h"
#include "MonsterAIController.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACreatureMonster::ACreatureMonster()                   //Ŭ���� ������
{
	AIControllerClass = AMonsterAIController::StaticClass(); //AI��Ʈ�ѷ� Ŭ������ AMonsterAIController�� ����
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;	 //���� ��ġ, ������ �� �ڵ����� AI�� ����

	UCharacterMovementComponent* Movement = GetCharacterMovement();  //ĳ���� �̵� ������Ʈ
	Movement->MaxWalkSpeed = WalkSpeed;                       // �̵��ӵ�
	Movement->bOrientRotationToMovement = true;               //�̵� �������� �ٶ󺸵��� ȸ��
	Movement->RotationRate = FRotator(0.0f, 700.0f, 0.0f);    //ȸ�� �ӵ�
}

// Called when the game starts or when spawned
void ACreatureMonster::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("[Monster] AI character has been spawned."));     //����

}

void ACreatureMonster::SetMovementSpeed(float NewSpeed)              //�̵� �ӵ� ���� ����
{
	if (UCharacterMovementComponent* Movement = GetCharacterMovement()) //�ǽð� �̵��ӵ� ����
	{
		Movement->MaxWalkSpeed = NewSpeed;
	}
}

