#pragma once

#include "CoreMinimal.h"
#include "Monster.h"
#include "BossMonster.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API ABossMonster : public AMonster
{
	GENERATED_BODY()
	
public:
	ABossMonster();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* UniqueAttackMontage;

	virtual void Attack() override; // 공격 커스터마이징

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss")
	bool bIsBoss;
};
