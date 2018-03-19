// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyHealth.generated.h"

UCLASS()
class CARPOCALYPSE_API AEnemyHealth : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemyHealth();

	UFUNCTION(BlueprintCallable, Category = "Health")
		static int SetHealth(int enemyIdentifier);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		int health = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		int _passedEnemyIdentifier;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};