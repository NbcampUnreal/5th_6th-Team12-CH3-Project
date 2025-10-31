// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemRandomBox.generated.h"

UCLASS()
class TEAM_12_DESERT_API AItemRandomBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemRandomBox();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Random")
	TObjectPtr<UDataTable> ItemDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ExpItem")
	TSubclassOf<AActor> ExpUpItem;

	//아이템을 렌덤으로 받아오며 렌덤하게 아이템을 드랍하도록
	TObjectPtr<AActor> SpawnRandomItem(FVector Location);

private:
	//랜덤으로 스폰될 아이템을 결정하는 함수
	struct FItemSpawnRow* GetRandomItem() const;
	// 랜덤한 아이템을 스폰할 함수
	TObjectPtr<AActor> SpawnItem(TSubclassOf<AActor> ItemClass, FVector Location);
};
