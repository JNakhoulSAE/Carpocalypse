// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyHealth.h"

 // Sets default values
	AEnemyHealth::AEnemyHealth()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AEnemyHealth::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemyHealth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AEnemyHealth::SetHealth(EEnemyTypes enemyType)
{
	float health;
	
	switch (enemyType)
	{
	case EEnemyTypes::EType_Melee:
		health = 88;
		break;

	case EEnemyTypes::EType_Ranged:
		health = 100;
		break;

	case EEnemyTypes::EType_Healer:
		health = 200;
		break;

	default:
		health = 10;
		break;
	}

	return health;
}