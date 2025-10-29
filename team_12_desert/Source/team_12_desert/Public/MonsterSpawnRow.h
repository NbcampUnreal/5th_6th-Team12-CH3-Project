// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MonsterSpawnRow.generated.h"


USTRUCT(BlueprintType)
struct FMonsterSpawnRow : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName MonsterName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> MonsterClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCount;
};
