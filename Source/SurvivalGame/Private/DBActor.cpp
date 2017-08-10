// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "SurvivalGame.h"
#include "DBActor.h"


// Sets default values
ADBActor::ADBActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADBActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADBActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

