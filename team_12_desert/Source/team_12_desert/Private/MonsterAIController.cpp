#include "MonsterAIController.h"
#include "Monster.h"
#include "TimerManager.h"
#include "Navigation/PathFollowingComponent.h"
#include "Kismet/GameplayStatics.h"

AMonsterAIController::AMonsterAIController()
{
    bCanAttack = true;
    PrimaryActorTick.bCanEverTick = true;  // Tick ��� �����ϰ� ����
}   

void AMonsterAIController::BeginPlay()
{
    Super::BeginPlay();

    // �÷��̾� Pawn ��������
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

    // �÷��̾�� ���� �Ÿ� ���
    float Dist = FVector::Dist(PlayerPawn->GetActorLocation(), Monster->GetActorLocation());

    // ���� ���� ���̸� �̵�
    if (Dist > Monster->AttackRange)
    {
        // �̹� �̵� ������ Ȯ�� �� MoveToActor ȣ��
        if (GetMoveStatus() != EPathFollowingStatus::Moving)
        {
            MoveToActor(PlayerPawn, AcceptanceRadius, true, true, true, nullptr, true);
        }
    }
    else
    {
        // ���� ���� ���̸� �̵� ���߰� ����
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

        // ���� ��Ÿ�� ����
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
