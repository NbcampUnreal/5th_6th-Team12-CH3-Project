#pragma once

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
};