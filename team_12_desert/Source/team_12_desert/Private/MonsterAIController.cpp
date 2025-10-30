#include "MonsterAIController.h"
#include "Monster.h"
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
    bCanAttack = true;
}
