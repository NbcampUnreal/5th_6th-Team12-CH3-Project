// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "ActiveItemBase.h"
#include "ItemInventoryData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FItemInventoryData : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActiveItemBase> ItemClass;

	TObjectPtr<AActiveItemBase> ItemInstance = ItemClass.GetDefaultObject();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemDescription;

	int32 Quantity;

};
