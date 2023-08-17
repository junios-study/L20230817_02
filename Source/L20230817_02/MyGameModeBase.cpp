// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

AMyGameModeBase::AMyGameModeBase()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red,
			TEXT("안녕하세요."));
	}

	UE_LOG(LogTemp, Warning, TEXT("Hello World"));

	//NewObject<>()
	//GetWorld()->SpawnActor<>
		
}

void AMyGameModeBase::A()
{
}
