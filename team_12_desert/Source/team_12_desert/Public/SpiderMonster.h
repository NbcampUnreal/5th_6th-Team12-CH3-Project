#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MonsterAIController.h"
#include "SpiderMonster.generated.h"

UCLASS()
class TEAM_12_DESERT_API ASpiderMonster : public ACharacter
{
    GENERATED_BODY()

public:
    ASpiderMonster();

	// ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
	float CurrentHealth;

	// �̵�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RotationRateYaw;

	// ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float AttackDamage;

	// ���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drop")
	TSubclassOf<AActor> DropItemClass;

	// ���� ���� ����
	bool bCanAttack;

	FTimerHandle AttackTimerHandle;

	// �Լ�
	void AttackPlayer();
	void ResetAttack();
	void ApplyDamage(float DamageAmount);
	void DropItem();
	void DestroyMonster();

	// AIController ����
	UPROPERTY(EditAnywhere, Category = "AI")
	TSubclassOf<AMonsterAIController> AIControllerClassToUse;

protected:
    virtual void BeginPlay() override;

    // ���� ��Ÿ�� ������
    bool bIsClimbingWall;

    // ���� ����
    FVector WallNormal;

    // ���� ��� (�÷��̾�)
    APawn* TargetPlayer;

    // ������ Ÿ�̸�
    FTimerHandle ChaseTimerHandle;

    // �� ����
    bool DetectWall(FHitResult& OutHit);

    // ��Ÿ�� ���� / ����
    void StartClimbing(const FVector& Normal);
    void StopClimbing();

    // �÷��̾� ����
    void ChasePlayer();

public:
    virtual void Tick(float DeltaTime) override;

    // ����׿�: ��Ž�� �Ÿ�
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climbing")
    float WallDetectDistance = 150.f;

    // �̵� �ӵ�
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climbing")
    float ClimbSpeed = 400.f;
};
