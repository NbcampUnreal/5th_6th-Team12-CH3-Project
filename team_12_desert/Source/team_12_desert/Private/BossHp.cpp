// Fill out your copyright notice in the Description page of Project Settings.


#include "BossHp.h"
#include "Components/ProgressBar.h"

void UBossHp::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);

    float Current = SubHp->GetPercent();
    float Target = MainHp->GetPercent();

    // 보간으로 자연스럽게 감소
    float NewValue = FMath::FInterpTo(Current, Target, InDeltaTime, 3.0f);
    SubHp->SetPercent(NewValue);
}

void UBossHp::OnBossHPChanged(float NewPercent)
{
    MainHp->SetPercent(NewPercent);
}