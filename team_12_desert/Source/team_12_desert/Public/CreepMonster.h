#pragma once

#include "Monster.h"  
#include "CreepMonster.generated.h"

UCLASS()
class TEAM_12_DESERT_API ACreepMonster : public AMonster
{
	GENERATED_BODY()

public:
	ACreepMonster();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Attack() override; // 공격 커스터마이징
};