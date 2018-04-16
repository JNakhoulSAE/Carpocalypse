// Fill out your copyright notice in the Description page of Project Settings.

#include "HealerEnemyAI.h"
#include "EnemyHealth.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "MeleeEnemyAI.h"


// Sets default values
AHealerEnemyAI::AHealerEnemyAI()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHealerEnemyAI::BeginPlay()
{
	Super::BeginPlay();
	
	health = AEnemyHealth::SetHealth(EEnemyTypes::EType_Healer);

}

// Called every frame
void AHealerEnemyAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHealerEnemyAI::HealAllies() 
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMeleeEnemyAI::StaticClass(), foundMeleeActors);
	
	// Heal melee enemies
	
}