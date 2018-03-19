// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyHealth.h"

 // Sets default values
	AEnemyHealth::AEnemyHealth()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyHealth::BeginPlay()
{
	Super::BeginPlay();

	// Set health depending on enemy type
	AEnemyHealth::SetHealth(_passedEnemyIdentifier);
}

// Called every frame
void AEnemyHealth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyHealth::SetHealth(int enemyIdentifier)
{
	switch (enemyIdentifier)
	{
	case 0:
		health = 50;
		break;

	case 1:
		health = 100;
		break;

	case 2:
		health = 200;
		break;

	default:
		health = 10;
		break;
	}
}