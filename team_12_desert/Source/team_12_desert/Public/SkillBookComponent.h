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

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	TArray<TObjectPtr<class ASkillBase>> SkillList;

public:	

	//UFUNCTION(BlueprintCallable)
	void ActionSkill(TArray<TObjectPtr<class AMonster>>& Actors, int32 Distance);



	//UFUNCTION(BlueprintCallable)
	void AddSkill(TObjectPtr<class ASkillBase> NewSkill);

	//UFUNCTION(BlueprintCallable)
	void DeleteSkill(TObjectPtr<class ASkillBase> SkillToDelete);

};
