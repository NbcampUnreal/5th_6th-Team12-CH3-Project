#include "MonsterAICharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimInstance.h"

AMonsterAICharacter::AMonsterAICharacter()
{
	//(개별 몬스터 설정)
	MaxHealth = 200.f;
	WalkSpeed = 300.f;
	AttackDamage = 25.f;
	AttackRange = 180.f;
	AttackCooldown = 2.0f;

	// 움직임 관련 설정
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void AMonsterAICharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AMonsterAICharacter::Attack()
{
	// 부모의 Attack 호출 (기본 공격 로직 유지)
	Super::Attack();

	// 개별 몬스터 전용 공격 애니메이션
	if (UniqueAttackMontage)
	{
		float Duration = PlayAnimMontage(UniqueAttackMontage);
		if (Duration > 0.f)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s is attacking with unique montage!"), *GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to play unique montage for %s"), *GetName());
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UniqueAttackMontage not set for %s"), *GetName());
	}
}
