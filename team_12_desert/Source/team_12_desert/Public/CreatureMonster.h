#pragma once

#include "Monster.h"  
#include "CreatureMonster.generated.h"

UCLASS()
class TEAM_12_DESERT_API ACreatureMonster : public AMonster
{
	GENERATED_BODY()

public:
	ACreatureMonster();

protected:
	virtual void BeginPlay() override;

public:
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
	FVector BaseMeshRelativeLocation;
	FRotator BaseMeshRelativeRotation;

	FName BaseCollisionProfileName;
};