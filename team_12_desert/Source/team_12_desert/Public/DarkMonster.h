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
	// ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
	float CurrentHealth;

	// �̵�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RotationRateYaw;

	// ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackDamage;

	// ���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drop")
	TSubclassOf<AActor> DropItemClass;

	// ���� ���� ����
	bool bCanAttack;

	FTimerHandle AttackTimerHandle;

	// �Լ�
	void AttackPlayer();
	void ResetAttack();
	void ApplyDamage(float DamageAmount);
	void DropItem();
	void DestroyMonster();

	// AIController ����
	UPROPERTY(EditAnywhere, Category = "AI")
	TSubclassOf<AMonsterAIController> AIControllerClassToUse;
};
