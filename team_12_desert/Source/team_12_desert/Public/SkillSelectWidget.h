// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SkillSelectWidget.generated.h"

/**
 * 
 */

UCLASS()
class TEAM_12_DESERT_API USkillSelectWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeOnInitialized() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UDataTable> SkillDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> SkillBookClass;


	// 버튼 클릭시 호출하는 함수에 인자가 전달되지 않아 중간 다리 역할 함수를 만들었음, 이 부분을 추후에 수정할 필요가 있음
	void SetIndex1();
	void SetIndex2();
	void SetIndex3();

	void SelectSkill(int32 Index);
private:
	TArray<struct FSkillSelecteRow*> GetRandomSkill() const;

	TArray<FSkillSelecteRow*> Rowlist;

};
