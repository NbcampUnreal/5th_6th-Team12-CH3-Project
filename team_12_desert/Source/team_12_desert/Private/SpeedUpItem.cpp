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
	// ���˽� �����ð� ���� ĳ������ �̵��ӵ��� ���������ִ� ����
	/*
	-������ �����ϱ� ���� �ʿ� ����-
	������ �Ǿ����� Ȯ��
	�����ð��� �������� Ȯ��
	�ĳ�������� Ȯ��
	�ش� ĳ������ �̵��ӵ��� ���������ֱ� ��Ʈ��

	-�ǵ��� ����-
	ĳ���Ͱ� �ش� �����۰� �������� �ȴٸ� �ش� �Լ��� ���� -��-
	� ĳ���͸� ������� ���� üũ 
	ĳ���Ͱ� �����ϴ��� üũ -��-
	ĳ������ �̵��ӵ��� ���� 
	Ÿ�̸ӿ� ���� ������ �ش� �Լ��� ����ǰ��� �󸶳� �������� Ȯ�� -��-
	�����ð� �̻��̶�� ĳ������ �̵��ӵ��� ���󺹱����ش�

	-üũ����-
	�ǹ��� �ش� �Լ��� �����Ų ���Ͱ� destroy�� �ȴ� �ϴ��� ���� �� �Լ��� ��Ƽ� ������ ��ġ�� ���������� ���ᰡ �ɱ�?
	�ƴϸ� �ش� �Լ��� ���� �� ���ŵȴٸ� �Լ��� ���߿� ���߰� ������� �ɱ�?
	�ش��Լ��� ����ٰ��ϸ� �Ҵ�� �޸𸮿� �������� �ݳ��� �ϰ� ���� ���ΰ�?
	�ƴϸ� ��� ���Ƽ� �޸𸮴����� �̸��Ѽ� ������ ���ϸ� �̸�ų��?

	���Ű� �ȴٰ� �ϴ��� �������� �Լ��� ����ȴٸ� �������� �Ǹ� ���͸� ���Ž�Ű�� ���� �̵��ӵ� ����

	���ſ� ���ÿ� �Լ��� ����ȴٸ� ������ Ȥ�� ������ ���� �÷��̾��� �þ߿��� ������ �ʵ��� �����Ѵ����� 
	���� �Լ��� ����� ���� ����

	-Ȯ�� ���-
	������ ���� �Լ��� ������ �����ٿ� �α׸� ���� �˼� �ְڴ�

	-Ȯ�� ���-
	destroy���� ������ �Ǳ��� �ٸ�, timer�� �ִ� �Լ��� �۵��� ���� 
	���� 1�� ���� ���� ���� �Ҹ����� �Լ��� �۵��̵�

	-����-
	Destroy�� ��� �Ҹ��ڸ� ȣ������ �ʴ´� �� ������ UE�� ������ �÷���(GC)�� �۵���İ� ������ �ִµ�
	UE GC�� 1�� �������� �ѹ��� ó���ϸ�  Destroy�Լ��� �� GC�� �ν��� �ɼ��ֵ��� PendingKill ���·� ǥ�ø� �Ѵ�.
	�������ڸ� Destroy�� ȣ���� �ȴٸ� ���͸� PendingKill���·� ǥ��
	���� Ÿ�̸ӿ� �ִ� this������ ���� ���·� ó���Ǳ⿡ Ÿ�̸Ӵ� ������ ��������
	�ٸ� ���������� �޸𸮿��� ���ŵȰ��� �ƴϹǷ� ���� �ڵ�� �����̵ȴ� 
	�״��� �������÷��Ͱ� �޸� ȸ���� �ϰԵǸ� �޸� ȸ���� �Ǵ� ������ �ҷ������� �Ҹ��ڰ� �̶� �ҷ��� ���°��̴�
	
	-���� ���� ���-
	�������� ������ & ������ �����Ͽ� �÷��̾�� ������ �ʵ�������
	���� ���������� �������� ������ �Ϸᰡ �Ǿ����� ���Ÿ� �ϵ��� ����
	*/
	UE_LOG(LogTemp, Display, TEXT("overlap"));
	if (IsValid(Actor)) //ĳ���Ͱ� �����ϴ����� Ȯ���� �ٸ� ĳ���� �̿ܿ��� �ν��� �����ʵ��� üũ ���־���ҰͰ���
	{
		if (PlayerCharacter = Cast<AMainCharacter>(Actor))
		{
			UE_LOG(LogTemp, Display, TEXT("characteroverlap"));

			// PlayerCharacter-> ���� �̵��ӵ��� ������ �����ϵ��� ������û �ϱ�
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
		// ToDo : ĳ������ ���ǵ� ���� ���� �ۼ�
	}
	Destroy();
}

ASpeedUpItem::~ASpeedUpItem()
{
	UE_LOG(LogTemp, Display, TEXT("ItemDestroy"));
}
