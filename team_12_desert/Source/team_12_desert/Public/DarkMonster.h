#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MonsterAIController.h"
#include "DarkMonster.generated.h"

UCLASS()
class TEAM_12_DESERT_API ADarkMonster : public ACharacter
{
	GENERATED_BODY()

public:
	ADarkMonster();

protected:
	virtual void BeginPlay() override;

public:
	// 스탯
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
	float CurrentHealth;

	// 이동
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RotationRateYaw;

	// 공격
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackDamage;

	// 드랍
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drop")
	TSubclassOf<AActor> DropItemClass;

	// 공격 가능 여부
	bool bCanAttack;

	FTimerHandle AttackTimerHandle;

	// 함수
	void AttackPlayer();
	void ResetAttack();
	void ApplyDamage(float DamageAmount);
	void DropItem();
	void DestroyMonster();

	// AIController 연결
	UPROPERTY(EditAnywhere, Category = "AI")
	TSubclassOf<AMonsterAIController> AIControllerClassToUse;
};
