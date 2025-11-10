#pragma once

#include "CoreMinimal.h"
#include "Monster.h"  
#include "MonsterAICharacter.generated.h"

UCLASS()
class TEAM_12_DESERT_API AMonsterAICharacter : public AMonster
{
	GENERATED_BODY()

public:
	AMonsterAICharacter();

protected:
	virtual void BeginPlay() override;

public:
	// 개별 몬스터만의 공격 몽타주
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* UniqueAttackMontage;
	virtual void Attack() override; // 공격 커스터마이징
	virtual void ApplyDamage(float DamageAmount) override;

protected:
	// 죽음 이펙트
	virtual void StartDeathEffect() override;
	virtual void TimelineUpdate(float TimelineValue) override;
	virtual void TimelineFinished() override;


	/// <summary>
	/// 각 메쉬가 가진 갯수만큼 생성
	/// </summary>
	UPROPERTY()
	UMaterialInstanceDynamic* DissolveMaterialInstance0;
	UPROPERTY()
	UMaterialInstanceDynamic* DissolveMaterialInstance1;


	UPROPERTY()
	FVector BaseMeshRelativeLocation;
	FRotator BaseMeshRelativeRotation;

	FName BaseCollisionProfileName;
	float LastAttackTime = -FLT_MAX;
};