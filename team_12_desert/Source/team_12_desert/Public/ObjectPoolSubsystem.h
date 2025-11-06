// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ObjectPoolSubsystem.generated.h"

class AMonster;

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
    // 스포너가 풀을 미리 채워넣기 위해 호출
    void PrewarmPool(TSubclassOf<AMonster> MonsterClass, int32 Count);

    // 풀에서 몬스터 가져오기
    AMonster* GetMonster(TSubclassOf<AMonster> MonsterClass, FVector Location, FRotator Rotation);

    // 풀에 몬스터 반납하기
    void ReturnMonster(AMonster* Monster);

private:
    // 몬스터 클래스별로 비활성화된 몬스터 배열을 저장하는 맵
    TMap<TSubclassOf<AMonster>, TArray<AMonster*>> PooledMonsters;
    // 생성된 모든 몬스터를 추적 (게임 종료 시 정리용)
    UPROPERTY()
    TArray<AMonster*> AllSpawnedMonsters;
	
};
