// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "SkillSelecteRow.h"
#include "SkillSelectWidget.h"
#include "SkillBook.h"


void USkillSelectWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (!SkillDataTable) return;
	if (!SkillBookClass) return;
	Rowlist = GetRandomSkill();
	

#pragma region // SkillName Text Setting
	if (TObjectPtr<UTextBlock> SkillNameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("SkillName1"))))
	{
		if (Rowlist[0])
		{
			SkillNameText->SetText(FText::FromString(Rowlist[0]->SkillName));
		}
	}
	if (TObjectPtr<UTextBlock> SkillNameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("SkillName2"))))
	{
		if (Rowlist[1])
		{
			SkillNameText->SetText(FText::FromString(Rowlist[1]->SkillName));
		}
	}
	if (TObjectPtr<UTextBlock> SkillNameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("SkillName3"))))
	{
		if (Rowlist[2])
		{
			SkillNameText->SetText(FText::FromString(Rowlist[2]->SkillName));
		}
	}
#pragma endregion

#pragma region // SkillExplanation Text Setting
	if (TObjectPtr<UTextBlock> SkillExplanationText = Cast<UTextBlock>(GetWidgetFromName(TEXT("SkillExplanation1"))))
	{
		if (Rowlist[0])
		{
			SkillExplanationText->SetText(FText::FromString(Rowlist[0]->SkillExplanation));
		}
	}
	if (TObjectPtr<UTextBlock> SkillExplanationText = Cast<UTextBlock>(GetWidgetFromName(TEXT("SkillExplanation2"))))
	{
		if (Rowlist[1])
		{
			SkillExplanationText->SetText(FText::FromString(Rowlist[1]->SkillExplanation));
		}
	}
	if (TObjectPtr<UTextBlock> SkillExplanationText = Cast<UTextBlock>(GetWidgetFromName(TEXT("SkillExplanation3"))))
	{
		if (Rowlist[2])
		{
			SkillExplanationText->SetText(FText::FromString(Rowlist[2]->SkillExplanation));
		}
	}
#pragma endregion

#pragma region // SkillClass Texture Setting
	if (TObjectPtr<UImage> SkillImageText = Cast<UImage>(GetWidgetFromName(TEXT("SkillIcon1"))))
	{
		if (Rowlist[0] || Rowlist[0]->SkillImage)
		{
			SkillImageText->SetBrushFromTexture(Rowlist[0]->SkillImage);
		}
	}
	if (TObjectPtr<UImage> SkillImageText = Cast<UImage>(GetWidgetFromName(TEXT("SkillIcon2"))))
	{
		if (Rowlist[1] || Rowlist[1]->SkillImage)
		{
			SkillImageText->SetBrushFromTexture(Rowlist[1]->SkillImage);
		}
	}
	if (TObjectPtr<UImage> SkillImageText = Cast<UImage>(GetWidgetFromName(TEXT("SkillIcon3"))))
	{
		if (Rowlist[2] || Rowlist[2]->SkillImage)
		{
			SkillImageText->SetBrushFromTexture(Rowlist[2]->SkillImage);
		}
	}
#pragma endregion

#pragma region // SkillClass Select
	if (TObjectPtr<UButton> SkillSelect = Cast<UButton>(GetWidgetFromName(TEXT("select1"))))
	{
		if (Rowlist[0] || Rowlist[0]->SkillClass)
		{
			SkillSelect->OnClicked.AddDynamic(this, &USkillSelectWidget::SetIndex1);
		}
	}
	if (TObjectPtr<UButton> SkillSelect = Cast<UButton>(GetWidgetFromName(TEXT("select2"))))
	{
		if (Rowlist[1] || Rowlist[1]->SkillClass)
		{
			SkillSelect->OnClicked.AddDynamic(this, &USkillSelectWidget::SetIndex2);
		}
	}
	if (TObjectPtr<UButton> SkillSelect = Cast<UButton>(GetWidgetFromName(TEXT("select3"))))
	{
		if (Rowlist[2] || Rowlist[2]->SkillClass)
		{
			SkillSelect->OnClicked.AddDynamic(this, &USkillSelectWidget::SetIndex3);
		}
	}
#pragma endregion
}

TArray<FSkillSelecteRow*> USkillSelectWidget::GetRandomSkill() const
{
	TArray<FSkillSelecteRow*> result;
	result.Init(nullptr, 3);
	if (!SkillDataTable) return result;

	TArray<FSkillSelecteRow*> AllRows;
	static const FString ContextString(TEXT("Item Data Table Context"));
	SkillDataTable->GetAllRows(ContextString, AllRows);

	if (AllRows.IsEmpty()) return result;

	


	for (int i = 0; i < 3; i++) // 스킬이 중복되어 선택되는 문제가 있음 추후 수정 필요
	{
		float RandomValue = FMath::FRandRange(0.f, 1.f);
		float AccumulatedChance = 0.f;
		for (FSkillSelecteRow* Row : AllRows)
		{
			AccumulatedChance += Row->Chance;
			if (RandomValue < AccumulatedChance)
			{
				result[i] = { Row };
			}
		}
	}

	return result;
}
#pragma region // SetIndex Functions
void USkillSelectWidget::SetIndex1()
{
	SelectSkill(0);
}

void USkillSelectWidget::SetIndex2()
{
	SelectSkill(1);
}

void USkillSelectWidget::SetIndex3()
{
	SelectSkill(2);
}
#pragma endregion

void USkillSelectWidget::SelectSkill(int32 Index)
{
	if (!SkillBookClass) return;
	if (ASkillBook* SkillBook = Cast<ASkillBook>(SkillBookClass))
	{
		SkillBook->AddSkill(Rowlist[Index]->SkillClass);
	}
}
