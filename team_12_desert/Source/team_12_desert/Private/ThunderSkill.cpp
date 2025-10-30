// Fill out your copyright notice in the Description page of Project Settings.


#include "ThunderSkill.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "MonsterAIController.h"
#include "Monster.h"

AThunderSkill::AThunderSkill()
{
	Delay = 3.f;
	NiagaraEffect = nullptr;
	Damage = 0.2f;
}

void AThunderSkill::ActionSkill(TArray<AActor*> Actors, float time, FVector Location)
{
	Super::ActionSkill(Actors, time, Location);
	if (FMath::IsNearlyZero(FMath::Fmod(time, Delay), KINDA_SMALL_NUMBER))
	{
		
		for (AActor* Actor : Actors)
		{
			if (NiagaraEffect)
			{
				UNiagaraComponent* NiagaraComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
					GetWorld(),             // ���� ��ü
					NiagaraEffect,          // ������ ���̾ư��� �ý��� ����
					Actor->GetActorLocation() ,               // ���� ��ġ (���� ��ġ)
					FRotator::ZeroRotator,  // ���� ȸ�� (���� ȸ��)
					FVector(1.0f),          // ������ (���� ����)
					true,                   // AutoDestroy (����� ������ �ڵ����� �ı����� ����)
					false,                  // AutoActivate (���� �� �ڵ����� Ȱ��ȭ���� ����)
					ENCPoolMethod::AutoRelease,    // Ǯ�� ��� (���� ����)
					true                    // ����Ʈ�� Ȱ��ȭ���� ����
				);
			}
			if (TObjectPtr<AMonster> MonsterAI = Cast<AMonster>(Actor->GetInstigatorController()))
			{
				MonsterAI->ApplyDamage(Damage);
			}
			//ToDo : ���Ϳ��� ������ �ִ� ���� �߰�
		}
	}
}
