// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include"MonsterSpawnRow.h"
#include "GameFramework/Actor.h"
#include "Spawner.generated.h"

class AMonsterAICharacter;
class UBoxComponent;

UCLASS()
class TEAM_12_DESERT_API ASpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawner();

    virtual void Tick(float DeltaTime) override;


    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
    USceneComponent* Scene;
    // ���� ������ ����� �ڽ� ������Ʈ
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
    UBoxComponent* SpawningBox;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
    UDataTable* SpawnDataTable;
    FVector GetRandomPointInVolume() const;
    // Ư�� ������ Ŭ������ �����ϴ� �Լ�
    UFUNCTION(BlueprintCallable, Category = "Spawning")
    void SpawnEnemy();


    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool Infinity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float InfinityRespawnTime=3.0f;

    float time;
};
