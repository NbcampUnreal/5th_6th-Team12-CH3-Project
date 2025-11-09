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

    if (!PooledMonsters.Contains(MonsterClass))
    {
        PooledMonsters.Add(MonsterClass, TArray<AMonster*>());
    }

    TArray<AMonster*>& Pool = PooledMonsters[MonsterClass];

    for (int32 i = 0; i < Count; i++)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

        AMonster* NewMonster = World->SpawnActor<AMonster>(MonsterClass, FVector(-10000.0f), FRotator::ZeroRotator, SpawnParams);

        if (NewMonster)
        {
            NewMonster->SetOwningPoolSubsystem(this); 
            NewMonster->DeactivateMonster(); 
            AllSpawnedMonsters.Add(NewMonster);
        }
    }
}

AMonster* UObjectPoolSubsystem::GetMonster(TSubclassOf<AMonster> MonsterClass, FVector Location, FRotator Rotation)
{
    if (!MonsterClass) return nullptr;

    TArray<AMonster*>* Pool = PooledMonsters.Find(MonsterClass);
    AMonster* Monster = nullptr;


    if (Pool && Pool->Num() > 0)
    {
    
        for (int32 i = Pool->Num() - 1; i >= 0; --i)
        {
            AMonster* PotentialMonster = (*Pool)[i];

           
            if (!IsValid(PotentialMonster))
            {
                Pool->RemoveAt(i); 
                continue;
            }

           
            if (!AllSpawnedMonsters.Contains(PotentialMonster))
            {
                Pool->RemoveAt(i); 
                continue;
            }

            Monster = PotentialMonster; 
            Pool->RemoveAt(i);       
            break;                   
        }
    }

    
    if (Monster)    {
       
        Monster->ActivateMonster(Location, Rotation);
        return Monster;
    }

    UWorld* World = GetWorld();
    if (!World) return nullptr;

    UE_LOG(LogTemp, Warning, TEXT("Pool for %s is empty. Spawning new monster."), *MonsterClass->GetName());

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    AMonster* NewMonster = World->SpawnActor<AMonster>(MonsterClass, Location, Rotation, SpawnParams);
    if (NewMonster)
    {
        NewMonster->SetOwningPoolSubsystem(this);
        AllSpawnedMonsters.Add(NewMonster); 
        return NewMonster;
    }

    return nullptr;
}

void UObjectPoolSubsystem::ReturnMonster(AMonster* Monster)
{
    if (!Monster) return;

    TSubclassOf<AMonster> MonsterClass = Monster->GetClass();

    if (!PooledMonsters.Contains(MonsterClass))
    {
        PooledMonsters.Add(MonsterClass, TArray<AMonster*>());
    }

    PooledMonsters[MonsterClass].Add(Monster);
}
