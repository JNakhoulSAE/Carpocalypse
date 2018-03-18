// Fill out your copyright notice in the Description page of Project Settings.

#include "testcharacter1.h"


// Sets default values
Atestcharacter1::Atestcharacter1()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Atestcharacter1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Atestcharacter1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Atestcharacter1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

