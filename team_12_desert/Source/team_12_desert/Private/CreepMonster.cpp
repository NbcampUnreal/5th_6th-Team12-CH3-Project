// Fill out your copyright notice in the Description page of Project Settings.

#include "CreepMonster.h"
#include "MonsterAIController.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACreepMonster::ACreepMonster()                   //클래스 생성자
{
	AIControllerClass = AMonsterAIController::StaticClass(); //AI컨트롤러 클래스를 AMonsterAIController로 지정
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;	 //월드 배치, 스폰될 때 자동으로 AI가 소유

	UCharacterMovementComponent* Movement = GetCharacterMovement();  //캐릭터 이동 컴포넌트
	Movement->MaxWalkSpeed = WalkSpeed;                       // 이동속도
	Movement->bOrientRotationToMovement = true;               //이동 방향으로 바라보도록 회전
	Movement->RotationRate = FRotator(0.0f, 540.0f, 0.0f);    //회전 속도
}

// Called when the game starts or when spawned
void ACreepMonster::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("[Monster] AI character has been spawned."));     //생성

}

void ACreepMonster::SetMovementSpeed(float NewSpeed)              //이동 속도 변경 로직
{
	if (UCharacterMovementComponent* Movement = GetCharacterMovement()) //실시간 이동속도 변경
	{
		Movement->MaxWalkSpeed = NewSpeed;
	}
}

