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
	
	//ĳ���Ϳ� ���ݷ� ������ �Ծ����� Ȯ���ϴ� �Һ����� �ټ��� ��û 
	// ��û�� �޾����� üũ�Ͽ� �ߺ����� ����� �ȵǵ��� ���� �ۼ�
};
