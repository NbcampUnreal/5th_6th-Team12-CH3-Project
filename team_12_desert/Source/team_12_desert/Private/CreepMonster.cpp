#include "CreepMonster.h"
#include "MonsterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

ACreepMonster::ACreepMonster()
{
	PrimaryActorTick.bCanEverTick = true;

	// 기본 스탯
	MaxHealth = 200.f;
	CurrentHealth = MaxHealth;

	WalkSpeed = 500.f;
	RotationRateYaw = 720.f;

	AttackRange = 100.f;
	AttackCooldown = 2.0f;
	AttackDamage = 20.f;

	bCanAttack = true;

	// AIController 설정
	AIControllerClass = AMonsterAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	//태그
	Tags.Add(FName("Monster"));
}

void ACreepMonster::BeginPlay()
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

void ACreepMonster::AttackPlayer()
{
	bCanAttack = false;
	UE_LOG(LogTemp, Warning, TEXT("[CreepMonster] Attack! Damage: %.1f"), AttackDamage);

	GetWorld()->GetTimerManager().SetTimer(
		AttackTimerHandle, this, &ACreepMonster::ResetAttack, AttackCooldown, false);
}

void ACreepMonster::ResetAttack()
{
	bCanAttack = true;
}

void ACreepMonster::ApplyDamage(float DamageAmount)
{
	CurrentHealth -= DamageAmount;

	if (CurrentHealth <= 0.f)
	{
		DropItem();
		// 주으면 템 떨구고 90도 회전
		FRotator CurrentRotation = GetActorRotation();
		FRotator TargetRotation = CurrentRotation + FRotator(0.f, 90.f, 0.f);
		SetActorRotation(TargetRotation);
		// 잠시 후 사라짐
		GetWorld()->GetTimerManager().SetTimer(
			AttackTimerHandle, this, &ACreepMonster::DestroyMonster, 0.5f, false);
	}
}

void ACreepMonster::DropItem()
{
	if (!DropItemClass) return;

	const FVector Loc = GetActorLocation();
	const FRotator Rot = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<AActor>(DropItemClass, Loc, Rot);
}

void ACreepMonster::DestroyMonster()
{
	Destroy();
}
