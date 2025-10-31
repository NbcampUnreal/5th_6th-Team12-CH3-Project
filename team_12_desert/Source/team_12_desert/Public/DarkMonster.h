#pragma once

#include "Monster.h"  
#include "DarkMonster.generated.h"

UCLASS()
class TEAM_12_DESERT_API ADarkMonster : public AMonster
{
	GENERATED_BODY()

public:
	ADarkMonster();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Attack() override; // 공격 커스터마이징
};