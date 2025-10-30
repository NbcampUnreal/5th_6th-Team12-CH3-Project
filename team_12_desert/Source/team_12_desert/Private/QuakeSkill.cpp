// Fill out your copyright notice in the Description page of Project Settings.


#include "QuakeSkill.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "MonsterAIController.h"


AQuakeSkill::AQuakeSkill()
{
	Delay = 5.f;
	NiagaraEffect = nullptr;
	Damage = 0.3f;
}

void AQuakeSkill::ActionSkill(TArray<AActor*> Actors, float time, FVector Location)
{
	Super::ActionSkill(Actors, time, Location);

	if (FMath::IsNearlyZero(FMath::Fmod(time, Delay), KINDA_SMALL_NUMBER))
	{
		if (NiagaraEffect)
		{
			UNiagaraComponent* NiagaraComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
				GetWorld(),             // 월드 객체
				NiagaraEffect,          // 스폰할 나이아가라 시스템 에셋
				Location,               // 스폰 위치 (액터 위치)
				FRotator::ZeroRotator,  // 스폰 회전 (액터 회전)
				FVector(40.0f),          // 스케일 (선택 사항)
				true,                   // AutoDestroy (재생이 끝나면 자동으로 파괴할지 여부)
				false,                  // AutoActivate (스폰 시 자동으로 활성화할지 여부)
				ENCPoolMethod::AutoRelease,    // 풀링 방법 (선택 사항)
				true                    // 이펙트를 활성화할지 여부
			);
		}
		for (AActor* Actor : Actors)
		{
			if (TObjectPtr<AMonsterAIController> MonsterAI = Cast<AMonsterAIController>(Actor->GetInstigatorController()))
			{
				//ToDo : 몬스터에게 데미지 주는 로직 추가
			}
		}
	}
}
