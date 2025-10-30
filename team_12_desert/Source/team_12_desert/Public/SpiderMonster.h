#pragma once

#include "Monster.h"  
#include "SpiderMonster.generated.h"

UCLASS()
class TEAM_12_DESERT_API ASpiderMonster : public AMonster
{
	GENERATED_BODY()

public:
	ASpiderMonster();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Attack() override; // 공격 커스터마이징
};