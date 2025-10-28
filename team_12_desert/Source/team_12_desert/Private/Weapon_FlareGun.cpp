// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_FlareGun.h"
#include "Animation/AnimInstance.h"
#include "BulletBase.h"
#include "MainCharacter.h"
#include "Kismet/KismetMathLibrary.h"

AWeapon_FlareGun::AWeapon_FlareGun()
{
	FlareGunMesh_0 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlareGunMesh_0"));
	FlareGunMesh_1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlareGunMesh_1"));
	FlareGunMesh_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlareGunMesh_2"));
	FlareGunMesh_3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlareGunMesh_3"));
	
	FlareGunMesh_0->SetupAttachment(RootComponent);
	FlareGunMesh_1->SetupAttachment(RootComponent);
	FlareGunMesh_2->SetupAttachment(RootComponent);
	FlareGunMesh_3->SetupAttachment(RootComponent);

	MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	MuzzleLocation->SetupAttachment(SceneComp);
}

void AWeapon_FlareGun::Attack()
{
	Super::Attack();
	/// 차후 발사 애니메이션 구할 수 있으면... 복원
	//UAnimInstance* AnimInstance = WeaponMesh->GetAnimInstance();
	//if (IsValid(AnimInstance) && IsValid(FireMontage))
	//{
	//	AnimInstance->Montage_Play(FireMontage);
	//}

	UE_LOG(LogTemp, Warning, TEXT("Flare Gun Attack"));
	if (IsValid(Bullet))
	{
		FRotator SpawnRotation = MuzzleLocation->GetComponentRotation();
		FVector SpawnLocation = MuzzleLocation->GetComponentLocation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		AMainCharacter* MC = Cast<AMainCharacter>(GetOwner());
		if (!IsValid(MC))
		{
			UE_LOG(LogTemp, Warning, TEXT("FIRE FAIL NOT MC"));
			GetWorld()->SpawnActor<ABulletBase>(Bullet, SpawnLocation, SpawnRotation, SpawnParams);
			return;
		}

		APlayerController* PC = Cast<APlayerController>(MC->GetController());
		int32 x, y;

		if (!IsValid(PC))
		{
			UE_LOG(LogTemp, Warning, TEXT("FIRE FAIL NOT PC"));
			GetWorld()->SpawnActor<ABulletBase>(Bullet, SpawnLocation, SpawnRotation, SpawnParams);
			return;
		}

		PC->GetViewportSize(x, y);
		FVector WorldCenter, WorldFront;
		PC->DeprojectScreenPositionToWorld(x / 2.0f, y / 2.0f, WorldCenter, WorldFront);
		WorldCenter += WorldFront * 10000.f;
		SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, WorldCenter);
		GetWorld()->SpawnActor<ABulletBase>(Bullet, SpawnLocation, SpawnRotation, SpawnParams);

	}
}
