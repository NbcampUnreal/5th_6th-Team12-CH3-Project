// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AItemBase.generated.h"



UCLASS()
class TEAM_12_DESERT_API AAItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AAItemBase();

protected:
	// �������� �Ǿ����� Ȯ���� �ؾ���
	// ���� ��Ʈ������Ʈ���� �� ������Ʈ, ����ƽ �޽�, ������ Ȯ���� ���� �ݸ����� �ʿ�
	TObjectPtr<USceneComponent> Scene;
	TObjectPtr<UStaticMeshComponent> StaticMesh;
	TObjectPtr<class USphereComponent> Collision;

public:

};
