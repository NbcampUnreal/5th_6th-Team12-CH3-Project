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
	// 오버렙이 되었는지 확인을 해야함
	// 먼저 루트컴포넌트가될 씬 컴포넌트, 스태틱 메시, 오버렙 확인을 위한 콜리젼이 필요
	TObjectPtr<USceneComponent> Scene;
	TObjectPtr<UStaticMeshComponent> StaticMesh;
	TObjectPtr<class USphereComponent> Collision;

public:

};
