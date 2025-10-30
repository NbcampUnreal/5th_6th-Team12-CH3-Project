// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IItemInterface.h"
#include "SkillBook.generated.h"

UCLASS()
class TEAM_12_DESERT_API ASkillBook : public AActor, public IIItemInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASkillBook();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TObjectPtr<USceneComponent> Scene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TObjectPtr<class USphereComponent> Collision;

	TObjectPtr<class AMainCharacter> MainCharacter;

	void setOwnerCharacter(TObjectPtr<class AMainCharacter> Character);

protected:

	TArray<TObjectPtr<class ASkillBase>> SkillList;

	TArray<AActor*> OverlappedActors;

	float Distance;

	UFUNCTION()
	virtual void OnItemOverlap(
		UPrimitiveComponent* OverlapPendComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	) override;

	UFUNCTION()
	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlapPendComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyInde
	) override;

	virtual void ActivateItem(TObjectPtr<AActor> Actor) override;
	virtual void DeactivateItem(TObjectPtr<AActor> Actor) override;
	
	void Tick(float DeltaTime) override;
	void ActionSkill(TArray<AActor*> Actors, float time);
public:
	// �ܺο��� ���� �Լ��Դϴ� 
	// ���������� ������ �����Ҷ� �� �� �Լ��� ����Ͻø� �˴ϴ�
	void AddSkill(TObjectPtr<class ASkillBase> NewSkill);

	void DeleteSkill(TObjectPtr<class ASkillBase> SkillToDelete);

};
