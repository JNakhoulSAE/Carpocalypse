// Fill out your copyright notice in the Description page of Project Settings.

#include "MathFunctionsAI.h"


// Sets default values
AMathFunctionsAI::AMathFunctionsAI()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

bool AMathFunctionsAI::EnemyHitOutOfRange(float Distance, float Range, int HitCount, int HitsRequired)
{
	if (Distance > Range){
		if (HitCount > HitsRequired) {
			return true;
		}

		return false;
	}

	return false;
}

float AMathFunctionsAI::FindPerpendicularDistnace(float firstPositionX, float firstPositionY, float secondPositionX, float secondPositionY,
	float enemyPositionX, float enemyPositionY)
{
	float aEq = (firstPositionY - secondPositionY);
	float bEq = (secondPositionX - firstPositionX);
	float cEq = firstPositionY * (firstPositionX - secondPositionX) + firstPositionX * (secondPositionX - firstPositionY);

	float topEq = (aEq * enemyPositionX) + (bEq * enemyPositionY) + cEq;

	if (topEq < 0) {
			topEq = topEq * -1;
	}

	float perpendicularDistance = topEq / (aEq * aEq + bEq * bEq);

	return perpendicularDistance;
}

// Called when the game starts or when spawned
void AMathFunctionsAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMathFunctionsAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

