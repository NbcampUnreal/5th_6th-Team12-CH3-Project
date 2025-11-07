#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/TimelineComponent.h"

#include "Monster.generated.h"

class UWidgetComponent;
class UProgressBar;
class UTextBlock;
class UDamageText;
class UDamagePopUpActor;
UCLASS()
class TEAM_12_DESERT_API AMonster : public ACharacter
{
	GENERATED_BODY()

public:
	AMonster();

protected:
	virtual void BeginPlay() override;

	//UI
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
	UWidgetComponent* OverheadWidget;

	UPROPERTY(EditAnywhere, Category="UI")
	UWidgetComponent* damageWidget;

	UDamageText* damageTextInstance;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* HPBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TSubclassOf<AActor> damagePopUpActor;


	bool bIsDeactivated;

	UPROPERTY()
	class UObjectPoolSubsystem* OwningPoolSubsystem;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//-----------------------
	// 스탯
	//-----------------------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float RotationRateYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float AttackDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float AttackRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float AttackCooldown;


	UFUNCTION(BlueprintCallable)
	virtual void ApplyDamage(float DamageAmount);

	UFUNCTION(BlueprintCallable)
	virtual void Attack();

	UFUNCTION(BlueprintCallable)
	virtual void DropItem();

	//UI  
	void HpBarProgress();
	void HpBarDirUpdate();
	void ShowDamage(float dmg);


	virtual void ActivateMonster(FVector Location, FRotator Rotation);

	virtual void DeactivateMonster();

	void SetOwningPoolSubsystem(class UObjectPoolSubsystem* InSubsystem);


	// 피격시 삐용 by mpyi
	UFUNCTION(BlueprintCallable)
	void DamagedLaunch(FVector MC_Vector);

	// 죽을 때 이펙트용
	UFUNCTION(BlueprintCallable, Category = "Death_Effect")
	virtual void StartDeathEffect();

protected:
	// 2. 타임라인 컴포넌트 선언
	UPROPERTY()
	class UTimelineComponent* DissolveTimeline;

	// 3. Dissolve 효과에 사용할 커브 애셋 (BP 에디터에서 설정)
	UPROPERTY(EditDefaultsOnly, Category = "Death Effect")
	UCurveFloat* DissolveCurve;

	// 5. 타임라인이 매 프레임 호출할 업데이트 함수 (UFUNCTION 필수)
	UFUNCTION()
	virtual void TimelineUpdate(float TimelineValue);

	// 6. 타임라인이 완료될 때 호출될 함수 (선택 사항)
	UFUNCTION()
	virtual void TimelineFinished();
	
	FOnTimelineFloat UpdateFunctionFloat;
	FOnTimelineEvent FinishedFunction;

	// add_pcy
	UPROPERTY(EditAnywhere, Category = "ItemSpawn")
	TSubclassOf<class AItemRandomBox> ItemRandomBoxActor;

	UPROPERTY(VisibleAnywhere, Category = "ItemSpawn")
	TObjectPtr<AItemRandomBox> ItemRandomBoxInstance;

};
