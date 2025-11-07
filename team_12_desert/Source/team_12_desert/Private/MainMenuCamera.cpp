// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuCamera.h"
#include "Camera/CameraComponent.h"
// Sets default values
AMainMenuCamera::AMainMenuCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	RootComponent = Camera;

	Tags.Add(FName("Cam"));

}

// Called when the game starts or when spawned
void AMainMenuCamera::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		PC->SetViewTarget(this);
	}

}

// Called every frame
void AMainMenuCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimePassed += DeltaTime * SwingSpeed;
	float YawOffset = FMath::Sin(TimePassed) * SwingAngle;
	FRotator NewRotation = GetActorRotation();
	NewRotation.Yaw += YawOffset;
	SetActorRotation(NewRotation);
}

