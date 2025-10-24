#include "MonsterAIController.h"
#include "Kismet/GameplayStatics.h" //UGameplayStatics::GetPlayerPawn() �Լ��� ����ϱ� ���� ����

AMonsterAIController::AMonsterAIController()
{
	PrimaryActorTick.bCanEverTick = true; // Tick Ȱ��ȭ
}

void AMonsterAIController::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);   //���� ���忡�� �÷��̾��� Pawn ��ü�� ������, 0�� ù���� �÷��̾� �ǹ�-> ����� playerpawn�� ����

}

void AMonsterAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!PlayerPawn) return;

	// �Ÿ� ���
	float DistanceToPlayer = FVector::Dist(PlayerPawn->GetActorLocation(), GetPawn()->GetActorLocation());

	if (DistanceToPlayer > AttackRange)
	{
		// ��Ÿ� ���̸� ��� ����
		MoveToActor(PlayerPawn, 5.0f);  //(��������,�󸶳� ������ ����)
	}
	else
	{
		// ��Ÿ� ���̸� �̵� ���߰� ���� �õ�
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

	// ������ ���� �α�
	UE_LOG(LogTemp, Warning, TEXT("[MonsterAI] Monster attacks the player!"));


	// ���� ��Ÿ�� Ÿ�̸� ����
	GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle, this, &AMonsterAIController::ResetAttack, AttackCooldown, false);
	//            Ÿ�̸� �ڵ�,                               �� ��ü                                      ��Ÿ��         �ݺ�X
}

void AMonsterAIController::ResetAttack()
{
	bCanAttack = true; //��Ÿ�� ���� �ٽ� ���� ����
}