#pragma once

#include "CoreMinimal.h"
#include "Monster.h"
#include "BossMonster.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBossHPChanged, float, NewHPPercent);

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

	UPROPERTY(BlueprintAssignable)
	FOnBossHPChanged OnHPChanged; // 체력 변경 시 알림용
};
