#include "SpiderMonster.h"

ASpiderMonster::ASpiderMonster()
{
	//(���� ���� ����)
	MaxHealth = 200.f;
	WalkSpeed = 300.f;
	AttackDamage = 25.f;
	AttackRange = 180.f;
	AttackCooldown = 2.0f;
}

void ASpiderMonster::BeginPlay()
{
	Super::BeginPlay();
}

void ASpiderMonster::Attack()
{

}
