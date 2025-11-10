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

#include "Components/TimelineComponent.h"

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


	// 죽을때 사라지는 용도의 타임라인 생성
	DissolveTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DissolveTimeline"));
	DissolveTimeline->bAutoActivate = false;

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
	// 자식 클래스로 이동
}

void AMonster::Attack()
{
	UE_LOG(LogTemp, Warning, TEXT("Monster attack!"));
}

void AMonster::DropItem()
{
	if (!ItemRandomBoxActor) return;
	
	ItemRandomBoxInstance = GetWorld()->SpawnActor<AItemRandomBox>(ItemRandomBoxActor, GetActorLocation(), FRotator::ZeroRotator);
	ItemRandomBoxInstance->SpawnRandomItem(GetActorLocation());
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

	// 풀 매니저에게 반납
	if (OwningPoolSubsystem)
	{
		OwningPoolSubsystem->ReturnMonster(this);
	}
	else
	{
		// 풀 시스템이 없다면 그냥 파괴 (안전 장치)
		DropItem();
		Destroy();
	}
}
//
void AMonster::SetOwningPoolSubsystem(UObjectPoolSubsystem* InSubsystem)
{
	OwningPoolSubsystem = InSubsystem;
}

void AMonster::DamagedLaunch(FVector MC_Vector)
{
	// FVector LaunchDirection = -GetActorForwardVector() + FVector(-0.5f, 0.f, 0.5f);
	FVector LaunchDirection = MC_Vector + FVector(1.0f, 0.f, 1.0f);
	LaunchCharacter(LaunchDirection * 300.f, true, true);
}

void AMonster::StartDeathEffect()
{
	// 자식 클래스에서 구현
	UE_LOG(LogTemp, Warning, TEXT("Start Death Effect"));
	isDeath = true;
}

void AMonster::TimelineUpdate(float TimelineValue)
{
	// 자식 클래스에서 구현
}

void AMonster::TimelineFinished()
{
	// 자식 클래스에서 구현
	isDeath = false;	
}
