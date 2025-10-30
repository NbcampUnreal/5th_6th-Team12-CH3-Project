#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MonsterAIController.h"
#include "SpiderMonster.generated.h"

UCLASS()
class TEAM_12_DESERT_API ASpiderMonster : public ACharacter
{
    GENERATED_BODY()

public:
    ASpiderMonster();

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

protected:
    virtual void BeginPlay() override;

    // 현재 벽타기 중인지
    bool bIsClimbingWall;

    // 벽면 법선
    FVector WallNormal;

    // 추적 대상 (플레이어)
    APawn* TargetPlayer;

    // 추적용 타이머
    FTimerHandle ChaseTimerHandle;

    // 벽 감지
    bool DetectWall(FHitResult& OutHit);

    // 벽타기 시작 / 종료
    void StartClimbing(const FVector& Normal);
    void StopClimbing();

    // 플레이어 추적
    void ChasePlayer();

public:
    virtual void Tick(float DeltaTime) override;

    // 디버그용: 벽탐지 거리
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climbing")
    float WallDetectDistance = 150.f;

    // 이동 속도
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climbing")
    float ClimbSpeed = 400.f;
};
