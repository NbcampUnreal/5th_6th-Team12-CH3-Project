// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IItemInterface.h"
#include "ActiveItemInterface.h"
#include "ActiveItemBase.generated.h"


UCLASS()
class TEAM_12_DESERT_API AActiveItemBase : public AActor , public IActiveItemInterface
{
	GENERATED_BODY()

protected:
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
	) override;

protected:
	class UInventoryComponent* InventoryComponent;
	FName ItemID;
	class AMainCharacter* MainCharacter;
public:	
	AActiveItemBase();
	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;
	// Sets default values for this actor's properties
	virtual void Active(); 
	FName GetItemID() const { return ItemID; }

};
