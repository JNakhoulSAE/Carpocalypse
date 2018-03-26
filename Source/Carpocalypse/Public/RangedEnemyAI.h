// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RangedEnemyAI.generated.h"

UCLASS()
class CARPOCALYPSE_API ARangedEnemyAI : public AActor
{
	GENERATED_BODY()

	class BP_Player* PlayerBP;
	class AEnemyHealth* EnemyHP;
	
public:	
	// Sets default values for this actor's properties
	ARangedEnemyAI();

	UFUNCTION()
	void GetPlayerLocation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float player_z_loc;
	
};
