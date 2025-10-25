#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MonsterAIController.generated.h"

UCLASS()
class TEAM_12_DESERT_API AMonsterAIController : public AAIController
{
	GENERATED_BODY()

public:
	AMonsterAIController();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	APawn* PlayerPawn;

	// ���� ���� ������
	UPROPERTY(EditAnywhere, Category = "AI")
	float AttackRange = 50.0f;     //���� �Ÿ�

	UPROPERTY(EditAnywhere, Category = "AI")
	float AttackCooldown = 2.0f;   // ���� ��Ÿ�� (��)

	bool bCanAttack = true;        // ���� ���� ������ �������� ����

	// ���� �Լ�
	void AttackPlayer();           // ���� �Լ�

	// ��Ÿ�� Ÿ�̸�
	FTimerHandle AttackTimerHandle;

	// ��Ÿ�� ���� �Լ�
	void ResetAttack();            //��Ÿ�� ����
};