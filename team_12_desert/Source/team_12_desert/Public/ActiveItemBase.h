// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IItemInterface.h"
#include "ActiveItemBase.generated.h"


UCLASS()
class TEAM_12_DESERT_API AActiveItemBase : public AActor , public IIItemInterface
{
	GENERATED_BODY()

	virtual void OnItemOverlap(
		UPrimitiveComponent* OverlapPendComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	) override;
	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlapPendComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex
	) override;
protected:
	class UInventoryComponent* InventoryComponent;
	FName ItemID;
	class AMainCharacter* MainCharacter;
public:	
	AActiveItemBase();
	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;
	virtual void DeactivateItem(TObjectPtr<AActor> Actor) override;
	// Sets default values for this actor's properties
	virtual void Active(); 
	FName GetItemID() const { return ItemID; }

};
