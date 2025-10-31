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
<<<<<<< HEAD
    bCanAttack = true;
=======
	bCanAttack = true;
}

void AMonsterAIController::ApplyDamage(float DamageAmount)          //���� ���� �� ȣ��.
{
	CurrentHealth -= DamageAmount;                                  //������ �縸ŭ ����.
	if (CurrentHealth <= 0.f)
	{
		Cast<AMyGameState>(GetWorld()->GetGameState())->AddMonsterCount(-1); //���Ǵ� ��û.
	
		DropItem();

		if (APawn* P = GetPawn())                                   //0�Ǹ� ����.
		{
			P->DetachFromControllerPendingDestroy();
			P->Destroy();
		}
	}
}

void AMonsterAIController::DropItem()                                //���� ��ġ�� ������ ����.(�ٴڿ� ������ ����).
{
	if (!DropItemClass) return;
	
	if (APawn* P = GetPawn())                                    //ai�� �÷����ϴ� pawnȣ��.
	{
		const FVector Loc = P->GetActorLocation();               //pawn�� ���� ��ġ ȣ��.
		const FRotator Rot = FRotator::ZeroRotator;              //������ ȸ���� �ʱ�ȭ.

		// ���忡 ItemRandomBox ����
		if (AItemRandomBox* Box = GetWorld()->SpawnActor<AItemRandomBox>(ItemRandomBoxClass, Loc, Rot)) //loc = ��ġ, rot = ȸ��
		{
			// ���� ������ ���� �Լ� ȣ��
			Box->SpawnRandomItem(Loc);
		}
	}
>>>>>>> UI
}
