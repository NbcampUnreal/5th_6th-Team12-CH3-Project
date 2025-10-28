// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedUpItem.h"
#include "Kismet/GameplayStatics.h"
#include "MainCharacter.h"


ASpeedUpItem::ASpeedUpItem()
{
	Duration = 3.0f;
	PlayerCharacter = nullptr;
	ItemType = "SpeedUp";
}

void ASpeedUpItem::ActivateItem(TObjectPtr<AActor> Actor)
{
	// 접촉시 일정시간 동안 캐릭터의 이동속도를 증가시켜주는 로직
	/*
	-로직을 구성하기 위한 필요 조건-
	접촉이 되었는지 확인
	일정시간이 지났는지 확인
	어떤캐릭터인지 확인
	해당 캐릭터의 이동속도를 증감시켜주기 컨트롤

	-의도한 로직-
	캐릭터가 해당 아이템과 오버렙이 된다면 해당 함수가 실행 -완-
	어떤 캐릭터를 대상으로 할지 체크 
	캐릭터가 존재하는지 체크 -완-
	캐릭터의 이동속도의 증가 
	타이머와 같은 것으로 해당 함수가 실행되고나서 얼마나 지났는지 확인 -완-
	일정시간 이상이라면 캐릭터의 이동속도를 원상복구해준다

	-체크사항-
	의문점 해당 함수를 실행시킨 엑터가 destroy가 된다 하더라도 과연 이 함수는 살아서 역할을 마치고 정상적으로 종료가 될까?
	아니면 해당 함수를 실행 중 제거된다면 함수는 도중에 멈추고 사라지는 걸까?
	해당함수가 멈춘다고하면 할당된 메모리와 같은것을 반납을 하고 들어가는 것인가?
	아니면 계속 남아서 메모리누수를 이르켜서 성능의 저하를 이르킬까?

	제거가 된다고 하더라도 진행중인 함수가 진행된다면 오버렙이 되면 엑터를 제거시키고 추후 이동속도 원복

	제거와 동시에 함수가 종료된다면 스케일 혹은 투명도와 같이 플레이어의 시야에서 보이지 않도록 변경한다음에 
	이후 함수가 종료된 이후 제거

	-확인 방법-
	액터의 제거 함수를 실행한 다음줄에 로그를 찍어보면 알수 있겠다

	-확인 결과-
	destroy이후 진행이 되긴함 다만, timer에 있는 함수는 작동을 안함 
	이후 1분 가량 지난 이후 소멸자의 함수가 작동이됨

	-이유-
	Destroy는 즉시 소멸자를 호출하지 않는다 그 이유는 UE의 가비지 컬렉터(GC)의 작동방식과 연관이 있는데
	UE GC는 1분 간격으로 한번에 처리하며  Destroy함수는 그 GC에 인식이 될수있도록 PendingKill 상태로 표시를 한다.
	정리하자면 Destroy가 호출이 된다면 엑터를 PendingKill상태로 표시
	이후 타이머에 있는 this에서는 죽은 상태로 처리되기에 타이머는 실행이 되지않음
	다만 실질적으로 메모리에서 제거된것은 아니므로 이후 코드는 진행이된다 
	그다음 가비지컬렉터가 메모리 회수를 하게되며 메모리 회수가 되는 시점에 불러와지는 소멸자가 이때 불러와 지는것이다
	
	-다음 대응 방법-
	오버렙시 스케일 & 투명도를 조절하여 플레이어에게 보이지 않도록하자
	이후 실질적으로 아이템의 로직이 완료가 되었을때 제거를 하도록 하자
	*/
	UE_LOG(LogTemp, Display, TEXT("overlap"));
	if (IsValid(Actor)) //캐릭터가 존재하는지는 확인함 다만 캐릭터 이외에는 인식이 되지않도록 체크 해주어야할것같다
	{
		if (PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("characteroverlap"));

			// PlayerCharacter-> 추후 이동속도에 접근이 가능하도록 수정요청 하기
			SetActorHiddenInGame(true);
			SetActorEnableCollision(false);
			SetActorTickEnabled(false);

			GetWorld()->GetTimerManager().SetTimer(
				TimerHandle,
				this,
				&ASpeedUpItem::BackUpSpeed,
				Duration,
				false);
		}
	}
}

void ASpeedUpItem::BackUpSpeed()
{
	if (IsValid(PlayerCharacter))
	{
		UE_LOG(LogTemp, Display, TEXT("ItemCountDownComplete"));
		// ToDo : 캐릭터의 스피드 원복 로직 작성
	}
	Destroy();
}

ASpeedUpItem::~ASpeedUpItem()
{
	UE_LOG(LogTemp, Display, TEXT("ItemDestroy"));
}
