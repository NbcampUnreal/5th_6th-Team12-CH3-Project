#include "MonsterAICharacter.h"

AMonsterAICharacter::AMonsterAICharacter()
{
	//(���� ���� ����)
	MaxHealth = 200.f;
	WalkSpeed = 300.f;
	AttackDamage = 25.f;
	AttackRange = 180.f;
	AttackCooldown = 2.0f;
}

void AMonsterAICharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AMonsterAICharacter::Attack()
{

}
