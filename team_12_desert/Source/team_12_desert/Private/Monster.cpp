#include "Monster.h"
#include "MonsterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"
#include "MyGameInstance.h"
#include "MyGameState.h"
#include "Components/WidgetComponent.h"
#include "Components/ProgressBar.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "ObjectPoolSubsystem.h"
#include "Components/TextBlock.h"
#include "DamageText.h"
#include "DamagePopupActor.h"
#include "ItemRandomBox.h"

AMonster::AMonster()
{
	PrimaryActorTick.bCanEverTick = true;
	AIControllerClass = AMonsterAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	// 기본값 설정
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;
	WalkSpeed = 200.0f;
	RotationRateYaw = 720.f;
	AttackDamage = 10.0f;
	AttackRange = 150.0f;
	AttackCooldown = 1.0f;

	OverheadWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverheadWidget"));
	OverheadWidget->SetupAttachment(GetMesh());
	OverheadWidget->SetWidgetSpace(EWidgetSpace::World);

	/*OverheadHp = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverheadHp"));
	OverheadHp->SetupAttachment(GetMesh());
	OverheadHp->SetWidgetSpace(EWidgetSpace::World);*/

	if (damageWidget) {
		UUserWidget* damage = damageWidget->GetUserWidgetObject();
		damageTextInstance = Cast<UDamageText>(damage);
	}

	Tags.Add(FName("Monster"));
}

void AMonster::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;

	if (UCharacterMovementComponent* Move = GetCharacterMovement())
	{
		Move->MaxWalkSpeed = WalkSpeed;
		Move->bOrientRotationToMovement = true;
		Move->RotationRate = FRotator(0.f, RotationRateYaw, 0.f);
	}

	bUseControllerRotationYaw = false;

	if (OverheadWidget) {
		UUserWidget* Widget = Cast<UUserWidget>(OverheadWidget->GetUserWidgetObject());
		if (Widget) {
			UWidget* temp = Widget->GetWidgetFromName(TEXT("HpBar"));
			if (temp) {
			}
			HPBar = Cast<UProgressBar>(temp);
			HpBarProgress();

		}

	}

	/*if (OverheadHp) {
		UUserWidget* Widget = Cast<UUserWidget>(OverheadHp->GetUserWidgetObject());
		if (Widget) {
			UWidget* temp = Widget->GetWidgetFromName(TEXT("Damage"));
			if (temp) {
			}
			DamageText = Cast<UTextBlock>(temp);
			HpBarProgress();

		}

	}*/

}

void AMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	HpBarDirUpdate();
}

void AMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AMonster::ApplyDamage(float DamageAmount)
{
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
		ItemRandomBoxInstance = GetWorld()->SpawnActor<AItemRandomBox>(ItemRandomBoxActor, GetActorLocation(), FRotator::ZeroRotator);
		if (ItemRandomBoxInstance) ItemRandomBoxInstance->SpawnRandomItem(GetActorLocation());
		//DropItem();

		// 딜레이 후 Destroy
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
			{
				//Destroy();
				DeactivateMonster();
			});

	}
	FVector SpawnLocation = GetActorLocation() + FVector(0, 0, 120.0f);
	HpBarProgress();

	Cast<AMyGameState>(GetWorld()->GetGameState())->ResetHitMark();
}

void AMonster::Attack()
{
	UE_LOG(LogTemp, Warning, TEXT("Monster attack!"));
}

void AMonster::DropItem()
{
	if (!DropItemClass) return;

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	GetWorld()->SpawnActor<AActor>(DropItemClass, GetActorLocation(), FRotator::ZeroRotator, SpawnParams);
}

void AMonster::HpBarProgress()
{
	if (HPBar)
	{
		HPBar->SetPercent(CurrentHealth/MaxHealth);
	}
}

void AMonster::HpBarDirUpdate()
{
	if (OverheadWidget)
	{
		APlayerCameraManager* CamManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
		if (CamManager)
		{
			FVector CamLoc = CamManager->GetCameraLocation();
			FVector ToCam = CamLoc - OverheadWidget->GetComponentLocation();
			FRotator LookRot = FRotationMatrix::MakeFromX(ToCam).Rotator();
			OverheadWidget->SetWorldRotation(LookRot);
		}

	}
}

void AMonster::ShowDamage(float dmg)
{
	if (!damagePopUpActor) {
		return;
	}

	FVector spawnLoc = GetActorLocation() + FVector(0, 0, 140);
	FRotator spawnRot = FRotator::ZeroRotator;

	ADamagePopupActor* popupActor = GetWorld()->SpawnActor<ADamagePopupActor>(damagePopUpActor, spawnLoc, spawnRot);

	if (popupActor)
	{
		popupActor->InitDamage(dmg);
	}
}

void AMonster::ActivateMonster(FVector Location, FRotator Rotation)
{
	bIsDeactivated = false;

	// 위치 및 회전 설정
	SetActorLocation(Location);
	SetActorRotation(Rotation);

	// 활성화
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorTickEnabled(true);

	// 스탯 초기화
	CurrentHealth = MaxHealth;

	// UI 초기화
	if (OverheadWidget)
	{
		OverheadWidget->SetHiddenInGame(false);
	}
	HpBarProgress(); 

	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController && AIController->GetBrainComponent()) // BrainComponent가 있는지 확인
	{
		AIController->GetBrainComponent()->RestartLogic();
	}
}
//
void AMonster::DeactivateMonster()
{
	if (bIsDeactivated) return; // 중복 호출 방지
	bIsDeactivated = true;

	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	SetActorTickEnabled(false);

	if (OverheadWidget)
	{
		OverheadWidget->SetHiddenInGame(true);
	}

	AAIController* AIController = Cast<AAIController>(GetController());
	if (AIController && AIController->GetBrainComponent()) 
	{
		AIController->GetBrainComponent()->StopLogic(TEXT("Deactivated"));
	}

	// 드랍 아이템 로직 (필요하다면)
	DropItem();

	// 풀 매니저에게 반납
	if (OwningPoolSubsystem)
	{
		OwningPoolSubsystem->ReturnMonster(this);
	}
	else
	{
		// 풀 시스템이 없다면 그냥 파괴 (안전 장치)
		Destroy();
	}
}
//
void AMonster::SetOwningPoolSubsystem(UObjectPoolSubsystem* InSubsystem)
{
	OwningPoolSubsystem = InSubsystem;
}

