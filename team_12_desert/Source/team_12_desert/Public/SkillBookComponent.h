// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SkillBookComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEAM_12_DESERT_API USkillBookComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USkillBookComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	TArray<TObjectPtr<class ASkillBase>> SkillList;

	float Distance;

	void ActionSkill(TArray<TObjectPtr<AActor>> Actors, float time);


	TArray<TObjectPtr<AActor>> OverlappedActors;

public:	

	void ActivateItem(TObjectPtr<AActor> Actor);
	void DeactivateItem(TObjectPtr<AActor> Actor);

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AddSkill(TObjectPtr<class ASkillBase> NewSkill);

	void DeleteSkill(TObjectPtr<class ASkillBase> SkillToDelete);

};
