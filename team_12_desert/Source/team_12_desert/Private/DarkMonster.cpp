#include "DarkMonster.h"

ADarkMonster::ADarkMonster()
{
	//(���� ���� ����)
	MaxHealth = 200.f;
	WalkSpeed = 300.f;
	AttackDamage = 25.f;
	AttackRange = 180.f;
	AttackCooldown = 2.0f;
}

void ADarkMonster::BeginPlay()
{
	Super::BeginPlay();
}

void ADarkMonster::Attack()
{

}
