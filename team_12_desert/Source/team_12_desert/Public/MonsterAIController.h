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
	virtual void OnPossess(APawn* InPawn) override;                            //Pawn을 조종하기 시작할 때 호출

	// 공격, meta = (ClampMin = "0.0") = 최소값 설정.
	UPROPERTY(EditAnywhere, Category = "AI|Combat", meta = (ClampMin = "0.0"))
	float AttackRange = 0.0f;

	UPROPERTY(EditAnywhere, Category = "AI|Combat", meta = (ClampMin = "0.0"))
	float AttackCooldown = 0.0f;

	UPROPERTY(EditAnywhere, Category = "AI|Combat", meta = (ClampMin = "0.0"))
	float AttackDamage = 0.0f;

	// 스탯/이동/회전/드랍
	UPROPERTY(EditAnywhere, Category = "AI|Stats", meta = (ClampMin = "1.0"))
	float MaxHealth = 1.0f;

	UPROPERTY(VisibleInstanceOnly, Category = "AI|Stats")
	float CurrentHealth = 0.0f;

	UPROPERTY(EditAnywhere, Category = "AI|Movement", meta = (ClampMin = "0.0"))
	float WalkSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = "AI|Movement", meta = (ClampMin = "0.0"))
	float RotationRateYaw = 0.0f;

	// 몬스터 위치에 스폰할 ItemRandomBox 클래스
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TSubclassOf<AItemRandomBox> ItemRandomBoxClass;

	UPROPERTY(EditAnywhere, Category = "AI|Drop")
	TSubclassOf<AActor> DropItemClass;                                          //

private:
	APawn* PlayerPawn = nullptr;                                                //추격할 플레이어 객체
	bool bCanAttack = true;                                                     //공격 가능 여부
	FTimerHandle AttackTimerHandle;                                             //공격 쿨타임

	void AttackPlayer();                                                        //실제 공격 및 쿨타임 타이머 설정
	void ResetAttack();                                                         //타이머 이후 다시 공격
	void DropItem();                                                            //몬스터 처치 시 아이템 드롭

public:
	UFUNCTION(BlueprintCallable, Category = "AI|Damage")
	void ApplyDamage(float DamageAmount);
};
