#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MonsterAIController.generated.h"

class AItemRandomBox;
UCLASS()
class TEAM_12_DESERT_API AMonsterAIController : public AAIController
{
	GENERATED_BODY()

public:
	AMonsterAIController();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void OnPossess(APawn* InPawn) override;                            //Pawn�� �����ϱ� ������ �� ȣ��

	// ����, meta = (ClampMin = "0.0") = �ּҰ� ����.
	UPROPERTY(EditAnywhere, Category = "AI|Combat", meta = (ClampMin = "0.0"))
	float AttackRange = 0.0f;

	UPROPERTY(EditAnywhere, Category = "AI|Combat", meta = (ClampMin = "0.0"))
	float AttackCooldown = 0.0f;

	UPROPERTY(EditAnywhere, Category = "AI|Combat", meta = (ClampMin = "0.0"))
	float AttackDamage = 0.0f;

	// ����/�̵�/ȸ��/���
	UPROPERTY(EditAnywhere, Category = "AI|Stats", meta = (ClampMin = "1.0"))
	float MaxHealth = 1.0f;

	UPROPERTY(VisibleInstanceOnly, Category = "AI|Stats")
	float CurrentHealth = 0.0f;

	UPROPERTY(EditAnywhere, Category = "AI|Movement", meta = (ClampMin = "0.0"))
	float WalkSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = "AI|Movement", meta = (ClampMin = "0.0"))
	float RotationRateYaw = 0.0f;

	// ���� ��ġ�� ������ ItemRandomBox Ŭ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TSubclassOf<AItemRandomBox> ItemRandomBoxClass;

	UPROPERTY(EditAnywhere, Category = "AI|Drop")
	TSubclassOf<AActor> DropItemClass;                                          //

private:
	APawn* PlayerPawn = nullptr;                                                //�߰��� �÷��̾� ��ü
	bool bCanAttack = true;                                                     //���� ���� ����
	FTimerHandle AttackTimerHandle;                                             //���� ��Ÿ��

	void AttackPlayer();                                                        //���� ���� �� ��Ÿ�� Ÿ�̸� ����
	void ResetAttack();                                                         //Ÿ�̸� ���� �ٽ� ����
	void DropItem();                                                            //���� óġ �� ������ ���

public:
	UFUNCTION(BlueprintCallable, Category = "AI|Damage")
	void ApplyDamage(float DamageAmount);
};
