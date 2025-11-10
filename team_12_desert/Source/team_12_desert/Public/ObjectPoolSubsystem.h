// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ObjectPoolSubsystem.generated.h"

class AMonster;

USTRUCT()
struct FMonsterPool
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<TObjectPtr<AMonster>> Pool; // TObjectPtr 사용 권장
};
/**
 * 
 */
UCLASS()
class TEAM_12_DESERT_API UObjectPoolSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

public:
    void PrewarmPool(TSubclassOf<AMonster> MonsterClass, int32 Count);

    AMonster* GetMonster(TSubclassOf<AMonster> MonsterClass, FVector Location, FRotator Rotation);

    void ReturnMonster(AMonster* Monster);

private:
    UPROPERTY()
    TMap<TSubclassOf<AMonster>, FMonsterPool> PooledMonsters;
    UPROPERTY()
    TArray<TObjectPtr<AMonster>> AllSpawnedMonsters;
	
};
