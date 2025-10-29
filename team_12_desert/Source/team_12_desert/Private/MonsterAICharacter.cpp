#include "MonsterAICharacter.h"
#include "MonsterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

AMonsterAICharacter::AMonsterAICharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// 기본 스탯
	MaxHealth = 100.f;
	CurrentHealth = MaxHealth;

	WalkSpeed = 260.f;
	RotationRateYaw = 720.f;

	AttackRange = 100.f;
	AttackCooldown = 1.0f;
	AttackDamage = 10.f;

	bCanAttack = true;

	// AIController 설정
	AIControllerClass = AMonsterAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	//태그
	Tags.Add(FName("Monster"));
}

void AMonsterAICharacter::BeginPlay()
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

void AMonsterAICharacter::AttackPlayer()
{
	bCanAttack = false;
	UE_LOG(LogTemp, Warning, TEXT("[MonsterAICharacter] Attack! Damage: %.1f"), AttackDamage);

	GetWorld()->GetTimerManager().SetTimer(
		AttackTimerHandle, this, &AMonsterAICharacter::ResetAttack, AttackCooldown, false);
}

void AMonsterAICharacter::ResetAttack()
{
	bCanAttack = true;
}

void AMonsterAICharacter::ApplyDamage(float DamageAmount)
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
			AttackTimerHandle, this, &AMonsterAICharacter::DestroyMonster, 0.5f, false);
	}
}

void AMonsterAICharacter::DropItem()
{
	if (!DropItemClass) return;

	const FVector Loc = GetActorLocation();
	const FRotator Rot = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<AActor>(DropItemClass, Loc, Rot);
}

void AMonsterAICharacter::DestroyMonster()
{
	Destroy();
}