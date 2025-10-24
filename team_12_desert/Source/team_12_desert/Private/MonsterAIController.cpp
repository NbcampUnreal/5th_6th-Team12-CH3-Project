#include "MonsterAIController.h"
#include "Kismet/GameplayStatics.h" //UGameplayStatics::GetPlayerPawn() 함수를 사용하기 위해 포함

AMonsterAIController::AMonsterAIController()
{
	PrimaryActorTick.bCanEverTick = true; // Tick 활성화
}

void AMonsterAIController::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);   //현재 월드에서 플레이어의 Pawn 객체를 가져옮, 0은 첫번쨰 플레이어 의미-> 결과는 playerpawn에 저장

}

void AMonsterAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!PlayerPawn) return;

	// 거리 계산
	float DistanceToPlayer = FVector::Dist(PlayerPawn->GetActorLocation(), GetPawn()->GetActorLocation());

	if (DistanceToPlayer > AttackRange)
	{
		// 사거리 밖이면 계속 추적
		MoveToActor(PlayerPawn, 5.0f);  //(누구에게,얼마나 가깝게 접근)
	}
	else
	{
		// 사거리 안이면 이동 멈추고 공격 시도
		StopMovement();

		if (bCanAttack)
		{
			AttackPlayer();
		}
	}
}

void AMonsterAIController::AttackPlayer()
{
	bCanAttack = false;

	// 간단한 공격 로그
	UE_LOG(LogTemp, Warning, TEXT("[MonsterAI] Monster attacks the player!"));


	// 공격 쿨타임 타이머 설정
	GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle, this, &AMonsterAIController::ResetAttack, AttackCooldown, false);
	//            타이머 핸들,                               이 객체                                      쿨타임         반복X
}

void AMonsterAIController::ResetAttack()
{
	bCanAttack = true; //쿨타임 이후 다시 공격 가능
}