#include "MonsterAIController.h"
#include "ItemRandomBox.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

AMonsterAIController::AMonsterAIController()
{
	PrimaryActorTick.bCanEverTick = true;
	CurrentHealth = MaxHealth;                       //현재 체력을 초기 최대 체력으로 지정.
}

void AMonsterAIController::BeginPlay()
{
	Super::BeginPlay();
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);    //AI가 추적할 대상 지정.
}

void AMonsterAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (ACharacter* Char = Cast<ACharacter>(InPawn))     //
	{
		if (UCharacterMovementComponent* Move = Char->GetCharacterMovement())
		{
			Move->MaxWalkSpeed = WalkSpeed;                            //이동속도 설정
			Move->bOrientRotationToMovement = true;                    //자동회전 설정
			Move->RotationRate = FRotator(0.f, RotationRateYaw, 0.f);  //회전속도 설정
		}
	}

	CurrentHealth = MaxHealth;                                         //스폰 시 체력 리셋
}

void AMonsterAIController::Tick(float DeltaTime)                       //플레이어에게 이동 후 공격
{
	Super::Tick(DeltaTime);

	if (!PlayerPawn || !GetPawn()) return;

	const float Dist = FVector::Dist(PlayerPawn->GetActorLocation(), GetPawn()->GetActorLocation());
	if (Dist > AttackRange)
	{
		MoveToActor(PlayerPawn, 5.0f);
	}
	else
	{
		StopMovement();
		if (bCanAttack)
		{
			AttackPlayer();
		}
	}
}

void AMonsterAIController::AttackPlayer()                           //공격 쿨타임 설정
{ 
	bCanAttack = false;
	UE_LOG(LogTemp, Warning, TEXT("[MonsterAI] Attack! Damage: %.1f"), AttackDamage);

	GetWorld()->GetTimerManager().SetTimer(
		AttackTimerHandle, this, &AMonsterAIController::ResetAttack, AttackCooldown, false);
}

void AMonsterAIController::ResetAttack()                            //이후 다시 공격 가능
{
	bCanAttack = true;
}

void AMonsterAIController::ApplyDamage(float DamageAmount)          //공격 받을 때 호출.
{
	CurrentHealth -= DamageAmount;                                  //데미지 양만큼 감소.
	if (CurrentHealth <= 0.f)
	{
		Cast<UMyGameInstance>(GetGameInstance())->AddMonsterCount(-1);  //병권님 요청.
		DropItem();

		if (APawn* P = GetPawn())                                   //0되면 제거.
		{
			P->DetachFromControllerPendingDestroy();
			P->Destroy();
		}
	}
}

void AMonsterAIController::DropItem()                                //현재 위치에 아이템 스폰.(바닥에 아이템 떨굼).
{
	if (!DropItemClass) return;
	
	if (APawn* P = GetPawn())                                    //ai가 플레이하는 pawn호출.
	{
		const FVector Loc = P->GetActorLocation();               //pawn의 현재 위치 호출.
		const FRotator Rot = FRotator::ZeroRotator;              //아이템 회전값 초기화.

		// 월드에 ItemRandomBox 스폰
		if (AItemRandomBox* Box = GetWorld()->SpawnActor<AItemRandomBox>(ItemRandomBoxClass, Loc, Rot)) //loc = 위치, rot = 회전
		{
			// 랜덤 아이템 스폰 함수 호출
			Box->SpawnRandomItem(Loc);
		}
	}
}
