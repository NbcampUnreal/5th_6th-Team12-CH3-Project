#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Monster.generated.h"

class UWidgetComponent;
class UProgressBar;

UCLASS()
class TEAM_12_DESERT_API AMonster : public ACharacter
{
	GENERATED_BODY()

public:
	AMonster();

protected:
	virtual void BeginPlay() override;

	//UI
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	UWidgetComponent* OverheadWidget;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* HPBar;

	bool bIsDeactivated;

	// 이 몬스터를 관리하는 풀 매니저 (Spawner가 설정해줄 수 있음)
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

	//-----------------------
	// 드랍
	//-----------------------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TSubclassOf<AActor> DropItemClass;

	//-----------------------
	// 함수
	//-----------------------
	UFUNCTION(BlueprintCallable)
	virtual void ApplyDamage(float DamageAmount);

	UFUNCTION(BlueprintCallable)
	virtual void Attack();

	UFUNCTION(BlueprintCallable)
	virtual void DropItem();

	//UI  
	void HpBarProgress();
	void HpBarDirUpdate();


	// 몬스터를 활성화할 때 호출 (스탯, 위치 등 초기화)
	virtual void ActivateMonster(FVector Location, FRotator Rotation);

	// 몬스터를 비활성화할 때 호출 (풀에 반납)
	virtual void DeactivateMonster();

	// 풀 매니저 설정
	void SetOwningPoolSubsystem(class UObjectPoolSubsystem* InSubsystem);

};
