#include "MonsterAIController.h"
#include "ItemRandomBox.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

AMonsterAIController::AMonsterAIController()
{
	PrimaryActorTick.bCanEverTick = true;
	CurrentHealth = MaxHealth;                       //���� ü���� �ʱ� �ִ� ü������ ����.
}

void AMonsterAIController::BeginPlay()
{
	Super::BeginPlay();
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);    //AI�� ������ ��� ����.
}

void AMonsterAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (ACharacter* Char = Cast<ACharacter>(InPawn))     //
	{
		if (UCharacterMovementComponent* Move = Char->GetCharacterMovement())
		{
			Move->MaxWalkSpeed = WalkSpeed;                            //�̵��ӵ� ����
			Move->bOrientRotationToMovement = true;                    //�ڵ�ȸ�� ����
			Move->RotationRate = FRotator(0.f, RotationRateYaw, 0.f);  //ȸ���ӵ� ����
		}
	}

	CurrentHealth = MaxHealth;                                         //���� �� ü�� ����
}

void AMonsterAIController::Tick(float DeltaTime)                       //�÷��̾�� �̵� �� ����
{
	Super::Tick(DeltaTime);

	if (!PlayerPawn || !GetPawn()) return;

	const float Dist = FVector::Dist(PlayerPawn->GetActorLocation(), GetPawn()->GetActorLocation());
	if (Dist > AttackRange)
	{
		MoveToActor(PlayerPawn, 5.0f);
	}
	else
	{
		StopMovement();
		if (bCanAttack)
		{
			AttackPlayer();
		}
	}
}

void AMonsterAIController::AttackPlayer()                           //���� ��Ÿ�� ����
{ 
	bCanAttack = false;
	UE_LOG(LogTemp, Warning, TEXT("[MonsterAI] Attack! Damage: %.1f"), AttackDamage);

	GetWorld()->GetTimerManager().SetTimer(
		AttackTimerHandle, this, &AMonsterAIController::ResetAttack, AttackCooldown, false);
}

void AMonsterAIController::ResetAttack()                            //���� �ٽ� ���� ����
{
	bCanAttack = true;
}

void AMonsterAIController::ApplyDamage(float DamageAmount)          //���� ���� �� ȣ��.
{
	CurrentHealth -= DamageAmount;                                  //������ �縸ŭ ����.
	if (CurrentHealth <= 0.f)
	{
		Cast<UMyGameInstance>(GetGameInstance())->AddMonsterCount(-1);  //���Ǵ� ��û.
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
}
