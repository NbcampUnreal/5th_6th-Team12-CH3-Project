#include "DarkMonster.h"
#include "MonsterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

ADarkMonster::ADarkMonster()
{
	PrimaryActorTick.bCanEverTick = true;

	// �⺻ ����
	MaxHealth = 250.f;
	CurrentHealth = MaxHealth;

	WalkSpeed = 560.f;
	RotationRateYaw = 800.f;

	AttackRange = 60.f;
	AttackCooldown = 0.5f;
	AttackDamage = 25.f;

	bCanAttack = true;

	// AIController ����
	AIControllerClass = AMonsterAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	//�±�
	Tags.Add(FName("Monster"));
}

void ADarkMonster::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;

	if (UCharacterMovementComponent* Move = GetCharacterMovement())
	{
		Move->MaxWalkSpeed = WalkSpeed;
		Move->bOrientRotationToMovement = true;
		Move->RotationRate = FRotator(0.f, RotationRateYaw, 0.f);
	}
}

void ADarkMonster::AttackPlayer()
{
	bCanAttack = false;
	UE_LOG(LogTemp, Warning, TEXT("[DarkMonster] Attack! Damage: %.1f"), AttackDamage);

	GetWorld()->GetTimerManager().SetTimer(
		AttackTimerHandle, this, &ADarkMonster::ResetAttack, AttackCooldown, false);
}

void ADarkMonster::ResetAttack()
{
	bCanAttack = true;
}

void ADarkMonster::ApplyDamage(float DamageAmount)
{
	CurrentHealth -= DamageAmount;

	if (CurrentHealth <= 0.f)
	{
		DropItem();
		// ������ �� ������ 180�� ȸ��
		FRotator CurrentRotation = GetActorRotation();
		FRotator TargetRotation = CurrentRotation + FRotator(0.f, 90.f, 0.f);
		SetActorRotation(TargetRotation);
		// ��� �� �����
		GetWorld()->GetTimerManager().SetTimer(
			AttackTimerHandle, this, &ADarkMonster::DestroyMonster, 0.5f, false);

	}
}

void ADarkMonster::DropItem()
{
	if (!DropItemClass) return;

	const FVector Loc = GetActorLocation();
	const FRotator Rot = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<AActor>(DropItemClass, Loc, Rot);
}

void ADarkMonster::DestroyMonster()
{
	Destroy();
}