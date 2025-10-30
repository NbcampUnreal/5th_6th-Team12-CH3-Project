#include "SpiderMonster.h"

ASpiderMonster::ASpiderMonster()
{
	//(개별 몬스터 설정)
	MaxHealth = 200.f;
	WalkSpeed = 300.f;
	AttackDamage = 25.f;
	AttackRange = 180.f;
	AttackCooldown = 2.0f;

	Tags.Add(FName("Monster"));
}

void ASpiderMonster::BeginPlay()
{
	Super::BeginPlay();
}

void ASpiderMonster::Attack()
{

}
