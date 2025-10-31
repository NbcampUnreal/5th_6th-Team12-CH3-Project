#include "MonsterAIController.h"
<<<<<<< HEAD
#include "Monster.h"
=======
#include "ItemRandomBox.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "MyGameState.h"
#include "GameFramework/CharacterMovementComponent.h"
>>>>>>> UI
#include "TimerManager.h"
#include "Navigation/PathFollowingComponent.h"
#include "Kismet/GameplayStatics.h"

AMonsterAIController::AMonsterAIController()
{
    bCanAttack = true;
    PrimaryActorTick.bCanEverTick = true;  // Tick 사용 가능하게 설정
}   

void AMonsterAIController::BeginPlay()
{
    Super::BeginPlay();

    // 플레이어 Pawn 가져오기
    PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (PlayerPawn)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerPawn found: %s"), *PlayerPawn->GetName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerPawn is null!"));
    }

}

void AMonsterAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!PlayerPawn || !GetPawn()) return;

    AMonster* Monster = Cast<AMonster>(GetPawn());
    if (!Monster) return;

    // 플레이어와 몬스터 거리 계산
    float Dist = FVector::Dist(PlayerPawn->GetActorLocation(), Monster->GetActorLocation());

    // 공격 범위 밖이면 이동
    if (Dist > Monster->AttackRange)
    {
        // 이미 이동 중인지 확인 후 MoveToActor 호출
        if (GetMoveStatus() != EPathFollowingStatus::Moving)
        {
            MoveToActor(PlayerPawn, AcceptanceRadius, true, true, true, nullptr, true);
        }
    }
    else
    {
        // 공격 범위 안이면 이동 멈추고 공격
        StopMovement();

        if (bCanAttack)
        {
            AttackPlayer();
        }
    }
}

void AMonsterAIController::AttackPlayer()
{
    if (!bCanAttack) return;

    bCanAttack = false;

    if (AMonster* Monster = Cast<AMonster>(GetPawn()))
    {
       
        Monster->Attack();

        // 공격 쿨타임 설정
        GetWorld()->GetTimerManager().SetTimer(
            AttackTimerHandle,
            this,
            &AMonsterAIController::ResetAttack,
            Monster->AttackCooldown,
            false
        );
    }
}

void AMonsterAIController::ResetAttack()
{
<<<<<<< HEAD
    bCanAttack = true;
=======
	bCanAttack = true;
}

void AMonsterAIController::ApplyDamage(float DamageAmount)          //공격 받을 때 호출.
{
	CurrentHealth -= DamageAmount;                                  //데미지 양만큼 감소.
	if (CurrentHealth <= 0.f)
	{
		Cast<AMyGameState>(GetWorld()->GetGameState())->AddMonsterCount(-1); //병권님 요청.
	
		DropItem();

		if (APawn* P = GetPawn())                                   //0되면 제거.
		{
			P->DetachFromControllerPendingDestroy();
			P->Destroy();
		}
	}
}

void AMonsterAIController::DropItem()                                //현재 위치에 아이템 스폰.(바닥에 아이템 떨굼).
{
	if (!DropItemClass) return;
	
	if (APawn* P = GetPawn())                                    //ai가 플레이하는 pawn호출.
	{
		const FVector Loc = P->GetActorLocation();               //pawn의 현재 위치 호출.
		const FRotator Rot = FRotator::ZeroRotator;              //아이템 회전값 초기화.

		// 월드에 ItemRandomBox 스폰
		if (AItemRandomBox* Box = GetWorld()->SpawnActor<AItemRandomBox>(ItemRandomBoxClass, Loc, Rot)) //loc = 위치, rot = 회전
		{
			// 랜덤 아이템 스폰 함수 호출
			Box->SpawnRandomItem(Loc);
		}
	}
>>>>>>> UI
}
