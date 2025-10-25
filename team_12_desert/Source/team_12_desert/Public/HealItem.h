// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AItemBase.h"
#include "HealItem.generated.h"

/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API AHealItem : public AAItemBase
{
	GENERATED_BODY()
	
public:
	AHealItem();

	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;

	~AHealItem();
private:
	int32 HealAmount;
	
	//캐릭터에 공격력 포션을 먹었는지 확인하는 불변수와 겟셋터 요청 
	// 요청이 받아지면 체크하여 중복으로 사용이 안되도록 로직 작성
};
