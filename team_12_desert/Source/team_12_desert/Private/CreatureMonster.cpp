#include "CreatureMonster.h"
#include "MonsterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

ACreatureMonster::ACreatureMonster()
{
	PrimaryActorTick.bCanEverTick = true;

	// 기본 스탯
	MaxHealth = 50.f;
	CurrentHealth = MaxHealth;

	WalkSpeed = 750.f;
	RotationRateYaw = 800.f;

	AttackRange = 50.f;
	AttackCooldown = 0.5f;
	AttackDamage = 15.f;

	bCanAttack = true;

	// AIController 설정
	AIControllerClass = AMonsterAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	//태그
	Tags.Add(FName("Monster"));
}

void ACreatureMonster::BeginPlay()
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

void ACreatureMonster::AttackPlayer()
{
	bCanAttack = false;
	UE_LOG(LogTemp, Warning, TEXT("[CreatureMonster] Attack! Damage: %.1f"), AttackDamage);

	GetWorld()->GetTimerManager().SetTimer(
		AttackTimerHandle, this, &ACreatureMonster::ResetAttack, AttackCooldown, false);
}

void ACreatureMonster::ResetAttack()
{
	bCanAttack = true;
}

void ACreatureMonster::ApplyDamage(float DamageAmount)
{
	CurrentHealth -= DamageAmount;

	if (CurrentHealth <= 0.f)
	{
		DropItem();
		// 주으면 템 떨구고 180도 회전
		FRotator CurrentRotation = GetActorRotation();
		FRotator TargetRotation = CurrentRotation + FRotator(0.f, 180.f, 0.f);
		SetActorRotation(TargetRotation);
		// 잠시 후 사라짐
		GetWorld()->GetTimerManager().SetTimer(
			AttackTimerHandle, this, &ACreatureMonster::DestroyMonster, 0.5f, false);
		
	}
}

void ACreatureMonster::DropItem()
{
	if (!DropItemClass) return;

	const FVector Loc = GetActorLocation();
	const FRotator Rot = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<AActor>(DropItemClass, Loc, Rot);
}

void ACreatureMonster::DestroyMonster()
{
	Destroy();
}