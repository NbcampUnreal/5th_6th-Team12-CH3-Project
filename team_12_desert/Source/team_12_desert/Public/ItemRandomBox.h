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

	//�������� �������� �޾ƿ��� �����ϰ� �������� ����ϵ���
	TObjectPtr<AActor> SpawnRandomItem(FVector Location);

private:
	//�������� ������ �������� �����ϴ� �Լ�
	struct FItemSpawnRow* GetRandomItem() const;
	// ������ �������� ������ �Լ�
	TObjectPtr<AActor> SpawnItem(TSubclassOf<AActor> ItemClass, FVector Location);
};
