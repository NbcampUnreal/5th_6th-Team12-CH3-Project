// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IItemInterface.h"
#include "AItemBase.generated.h"

UCLASS()
class TEAM_12_DESERT_API AAItemBase : public AActor , public IIItemInterface
{
	GENERATED_BODY()
	
public:	
	AAItemBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemTypeName")
	FName ItemType;

protected:
	// 오버렙이 되었는지 확인을 해야함
	// 먼저 루트컴포넌트가될 씬 컴포넌트, 스태틱 메시, 오버렙 확인을 위한 콜리젼이 필요
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TObjectPtr<USceneComponent> Scene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TObjectPtr<UStaticMeshComponent> StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TObjectPtr<class USphereComponent> Collision;

	UFUNCTION()
	virtual void OnItemOverlap(
		UPrimitiveComponent* OverlapPendComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	)override;

	UFUNCTION()
	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlapPendComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyInde
	)override;

	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;
	virtual void DeactivateItem(TObjectPtr<AActor> Actor) override;
};
