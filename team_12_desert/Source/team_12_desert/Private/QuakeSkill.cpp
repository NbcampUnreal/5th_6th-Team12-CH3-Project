// Fill out your copyright notice in the Description page of Project Settings.


#include "QuakeSkill.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "Monster.h"
#include "MainCharacter.h"


AQuakeSkill::AQuakeSkill()
{
	Delay = 5;
	NiagaraEffect = nullptr;
}

void AQuakeSkill::ActionSkill(TArray<TObjectPtr<AMonster>> Actors, int32 time, TObjectPtr<AActor> owner)
{
	Super::ActionSkill(Actors, time, owner);
	if (time % Delay != 0) return;
	UE_LOG(LogTemp, Display, TEXT("QuakeAction"));
	if (NiagaraEffect)
	{
		UNiagaraComponent* NiagaraComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			GetWorld(),             // 월드 객체
			NiagaraEffect,          // 스폰할 나이아가라 시스템 에셋
			owner->GetActorLocation(),               // 스폰 위치 (액터 위치)
			FRotator::ZeroRotator,  // 스폰 회전 (액터 회전)
			FVector(40.0f),          // 스케일 (선택 사항)
			true,                   // AutoDestroy (재생이 끝나면 자동으로 파괴할지 여부)
			true,                  // AutoActivate (스폰 시 자동으로 활성화할지 여부)
			ENCPoolMethod::AutoRelease,    // 풀링 방법 (선택 사항)
			false                      // 이펙트를 활성화할지 여부
		);
	}
	if (Actors.Num() <= 0) return;
	for (TObjectPtr<AMonster> Actor : Actors)
	{
		if (IsValid(Actor) && IsValid(MainCharacter))
		{
			Actor->ApplyDamage((MainCharacter->getCharacterDamage()));
		}
	}
}
