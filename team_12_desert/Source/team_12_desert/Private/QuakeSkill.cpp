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
				GetWorld(),             // ���� ��ü
				NiagaraEffect,          // ������ ���̾ư��� �ý��� ����
				Location,               // ���� ��ġ (���� ��ġ)
				FRotator::ZeroRotator,  // ���� ȸ�� (���� ȸ��)
				FVector(40.0f),          // ������ (���� ����)
				true,                   // AutoDestroy (����� ������ �ڵ����� �ı����� ����)
				false,                  // AutoActivate (���� �� �ڵ����� Ȱ��ȭ���� ����)
				ENCPoolMethod::AutoRelease,    // Ǯ�� ��� (���� ����)
				true                    // ����Ʈ�� Ȱ��ȭ���� ����
			);
		}
		for (AActor* Actor : Actors)
		{
			if (TObjectPtr<AMonsterAIController> MonsterAI = Cast<AMonsterAIController>(Actor->GetInstigatorController()))
			{
				//ToDo : ���Ϳ��� ������ �ִ� ���� �߰�
			}
		}
	}
}
