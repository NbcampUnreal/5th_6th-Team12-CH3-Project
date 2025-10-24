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

	// 공격 관련 변수들
	UPROPERTY(EditAnywhere, Category = "AI")
	float AttackRange = 50.0f;     //공격 거리

	UPROPERTY(EditAnywhere, Category = "AI")
	float AttackCooldown = 2.0f;   // 공격 쿨타임 (초)

	bool bCanAttack = true;        // 현재 공격 가능한 상태인지 여부

	// 공격 함수
	void AttackPlayer();           // 공격 함수

	// 쿨타임 타이머
	FTimerHandle AttackTimerHandle;

	// 쿨타임 리셋 함수
	void ResetAttack();            //쿨타임 리셋
};