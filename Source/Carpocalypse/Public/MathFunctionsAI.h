// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MathFunctionsAI.generated.h"

UCLASS()
class CARPOCALYPSE_API AMathFunctionsAI : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMathFunctionsAI();

	UFUNCTION(BlueprintCallable, Category = "Calculations")
		static bool EnemyHitOutOfRange(float Distance, float Range, int HitCount, int HitsRequired);

	UFUNCTION(BlueprintCallable, Category = "Calculations")
		static float FindPerpendicularDistnace(float firstPositionX, float firstPositionY, float secondPositionX, float secondPositionY,
			float enemyPositionX, float enemyPositiony);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
