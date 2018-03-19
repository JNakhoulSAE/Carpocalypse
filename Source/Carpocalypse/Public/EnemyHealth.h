// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyHealth.generated.h"

UENUM(BlueprintType, category = "Health")
enum class EEnemyTypes : uint8
{
	EType_Melee UMETA(DisplayName = "Melee"),
	EType_Ranged UMETA(DisplayName = "Ranged"),
	EType_Healer UMETA(DisplayName = "Healer")
};

UCLASS()
class CARPOCALYPSE_API AEnemyHealth : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemyHealth();

	UFUNCTION(BlueprintCallable, Category = "Health")
		static int SetHealth(EEnemyTypes enemyType);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};