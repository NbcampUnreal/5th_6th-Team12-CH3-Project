#include "SpiderMonster.h"
#include "MyGameState.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/SkeletalMeshComponent.h"

ASpiderMonster::ASpiderMonster()
{
	//(개별 몬스터 설정)
	MaxHealth = 200.f;
	WalkSpeed = 300.f;
	AttackDamage = 25.f;
	AttackRange = 180.f;
	AttackCooldown = 2.0f;

}

void ASpiderMonster::BeginPlay()
{
	Super::BeginPlay();
}

void ASpiderMonster::Attack()
{

}

void ASpiderMonster::ApplyDamage(float DamageAmount)
{
	Super::ApplyDamage(DamageAmount);

	// 죽음 처리를 나누기 위해 자식 클래스로 이동
	ShowDamage(DamageAmount);
	CurrentHealth -= DamageAmount;
	UE_LOG(LogTemp, Warning, TEXT("Monster took %f damage, current health: %f"), DamageAmount, CurrentHealth);
	if (CurrentHealth <= 0.f)
	{
		// GameInstance에서 몬스터 수 감소
		Cast<AMyGameState>(GetWorld()->GetGameState())->AddMonsterCount(-1);
		Cast<AMyGameState>(GetWorld()->GetGameState())->UpdateMonsterCountHud();

		// 죽을 때 90도 쓰러짐
		FRotator DeathRotation = GetActorRotation();
		DeathRotation.Roll += 90.f; // X축으로 옆으로 쓰러짐 (Roll)
		SetActorRotation(DeathRotation);

		DropItem();

		// 죽는 이펙트, 래그돌 및 사라지는 효과
		StartDeathEffect();

	}
	FVector SpawnLocation = GetActorLocation() + FVector(0, 0, 120.0f);
	HpBarProgress();

	Cast<AMyGameState>(GetWorld()->GetGameState())->ResetHitMark();
}

void ASpiderMonster::StartDeathEffect()
{

	Super::StartDeathEffect();

	// 1. 머티리얼을 다이내믹 인스턴스로 변환
	USkeletalMeshComponent* MyMesh = GetMesh(); // ACharacter의 GetMesh() 사용

	// 이 세줄이 래그돌이다
	if (MyMesh)
	{
		MyMesh->SetCollisionProfileName(FName("Ragdoll"));
		MyMesh->SetSimulatePhysics(true);
		SetActorTickEnabled(false);
	}

	if (MyMesh->GetMaterial(0))
	{
		DissolveMaterialInstance0 = MyMesh->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MyMesh->GetMaterial(0));
	}


	// DissolveMaterialInstance가 성공적으로 생성되지 않았다면 여기서 종료
	if (!DissolveMaterialInstance0)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create Dissolve Material Instance!"));
		TimelineFinished(); // <- 여기서 죽음 처리해서 강제 실행
		return;
	}


	if (DissolveCurve)
	{
		UpdateFunctionFloat.BindUFunction(this, FName("TimelineUpdate"));
		DissolveTimeline->AddInterpFloat(DissolveCurve, UpdateFunctionFloat, FName("DissolveAlpha"));

		// 완료 함수 바인딩 (선택 사항: 효과 완료 후 처리)
		FinishedFunction.BindUFunction(this, FName("TimelineFinished"));
		DissolveTimeline->SetTimelineFinishedFunc(FinishedFunction);

		// 타임라인을 실행
		DissolveTimeline->PlayFromStart();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Dissolve Curve is not set!"));
	}
}

void ASpiderMonster::TimelineUpdate(float TimelineValue)
{
	Super::TimelineUpdate(TimelineValue);

	const float StartDissolve = -0.6f;
	const float EndDissolve = 0.7f;

	float NewDissolveValue = FMath::Lerp(StartDissolve, EndDissolve, TimelineValue);

	if (DissolveMaterialInstance0)
	{
		DissolveMaterialInstance0->SetScalarParameterValue(FName("Dissolve"), NewDissolveValue);
	}
}

void ASpiderMonster::TimelineFinished()
{
	Super::TimelineFinished();
	UE_LOG(LogTemp, Warning, TEXT("Dissolve Effect Finished!"));

	DissolveMaterialInstance0->SetScalarParameterValue(FName("Dissolve"), -0.6);

	/// 사망처리 여기로 이동
	// 딜레이 후 Destroy
	GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			//Destroy();
			DeactivateMonster();
		});
}
