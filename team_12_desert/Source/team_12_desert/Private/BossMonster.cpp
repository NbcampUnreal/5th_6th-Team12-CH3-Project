#include "BossMonster.h"
#include "MyGameInstance.h"
#include "MyGameState.h"
ABossMonster::ABossMonster()
{
	//(개별 몬스터 설정)
	MaxHealth = 200.f;
	WalkSpeed = 300.f;
	AttackDamage = 25.f;
	AttackRange = 180.f;
	AttackCooldown = 2.0f;
}

void ABossMonster::BeginPlay()
{
	Super::BeginPlay();
}

void ABossMonster::Attack()
{

}

void ABossMonster::ApplyDamage(float DamageAmount)
{
	ShowDamage(DamageAmount);
	CurrentHealth -= DamageAmount;
	UE_LOG(LogTemp, Warning, TEXT("Monster took %f damage, current health: %f"), DamageAmount, CurrentHealth);
	if (CurrentHealth <= 0.f)
	{
		// GameInstance에서 몬스터 수 감소
		Cast<AMyGameState>(GetWorld()->GetGameState())->AddMonsterCount(-1);
		Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateMonsterCountHud();

		// 죽을 때 90도 쓰러짐
		FRotator DeathRotation = GetActorRotation();
		DeathRotation.Roll += 90.f; // X축으로 옆으로 쓰러짐 (Roll)
		SetActorRotation(DeathRotation);

		DropItem();

		// 딜레이 후 Destroy
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
			{
				//Destroy();
				DeactivateMonster();
			});
		Cast<AMyGameState>(GetWorld()->GetGameState())->PortalsOpen(true);

	}
}