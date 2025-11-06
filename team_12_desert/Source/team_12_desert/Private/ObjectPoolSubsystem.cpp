// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolSubsystem.h"

#include "Monster.h"
#include "Engine/World.h"

void UObjectPoolSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
}

void UObjectPoolSubsystem::Deinitialize()
{
    for (AMonster* Monster : AllSpawnedMonsters)
    {
        if (Monster && IsValid(Monster))
        {
            Monster->Destroy();
        }
    }
    PooledMonsters.Empty();
    AllSpawnedMonsters.Empty();

    Super::Deinitialize();
}

void UObjectPoolSubsystem::PrewarmPool(TSubclassOf<AMonster> MonsterClass, int32 Count)
{
    if (!MonsterClass) return;

    UWorld* World = GetWorld();
    if (!World) return;

    // 해당 클래스의 풀이 없으면 생성
    if (!PooledMonsters.Contains(MonsterClass))
    {
        PooledMonsters.Add(MonsterClass, TArray<AMonster*>());
    }

    TArray<AMonster*>& Pool = PooledMonsters[MonsterClass];

    for (int32 i = 0; i < Count; i++)
    {
        // FActorSpawnParameters 설정
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

        // 일단 보이지 않는 곳에 스폰
        AMonster* NewMonster = World->SpawnActor<AMonster>(MonsterClass, FVector(-10000.0f), FRotator::ZeroRotator, SpawnParams);

        if (NewMonster)
        {
            NewMonster->SetOwningPoolSubsystem(this); // 풀 서브시스템 설정
            NewMonster->DeactivateMonster(); // 스폰 직후 비활성화 (알아서 풀에 들어감)
            AllSpawnedMonsters.Add(NewMonster); // 전체 목록에도 추가
        }
    }
}

AMonster* UObjectPoolSubsystem::GetMonster(TSubclassOf<AMonster> MonsterClass, FVector Location, FRotator Rotation)
{
    if (!MonsterClass) return nullptr;

    TArray<AMonster*>* Pool = PooledMonsters.Find(MonsterClass);

    // 1. 풀이 있고, 풀 안에 사용 가능한 몬스터가 있는 경우
    if (Pool && Pool->Num() > 0)
    {
        AMonster* Monster = Pool->Pop(); // 풀에서 하나 꺼냄
        Monster->ActivateMonster(Location, Rotation); // 활성화
        return Monster;
    }

    // 2. 풀이 없거나 비어있는 경우 (풀 오버플로우)
    // 이 경우 새로 스폰합니다.
    UWorld* World = GetWorld();
    if (!World) return nullptr;

    UE_LOG(LogTemp, Warning, TEXT("Pool for %s is empty. Spawning new monster."), *MonsterClass->GetName());

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    AMonster* NewMonster = World->SpawnActor<AMonster>(MonsterClass, Location, Rotation, SpawnParams);
    if (NewMonster)
    {
        NewMonster->SetOwningPoolSubsystem(this); // 풀 서브시스템 설정
        // ActivateMonster()는 호출할 필요 없음 (스폰 시 기본 활성화 상태)
        // 단, ActivateMonster()에 스탯 초기화 로직이 있으므로 일관성을 위해 호출하는 것이 나을 수 있습니다.
        // NewMonster->ActivateMonster(Location, Rotation); // 대신 BeginPlay()에서 처리될 것임.

        AllSpawnedMonsters.Add(NewMonster); // 전체 목록에 추가
        return NewMonster;
    }

    return nullptr;
}

void UObjectPoolSubsystem::ReturnMonster(AMonster* Monster)
{
    if (!Monster) return;

    TSubclassOf<AMonster> MonsterClass = Monster->GetClass();

    // 해당 클래스의 풀이 없으면 생성
    if (!PooledMonsters.Contains(MonsterClass))
    {
        PooledMonsters.Add(MonsterClass, TArray<AMonster*>());
    }

    // 몬스터를 풀에 다시 추가
    PooledMonsters[MonsterClass].Add(Monster);
}
