// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CarpocalypseGameMode.h"
#include "CarpocalypsePawn.h"

ACarpocalypseGameMode::ACarpocalypseGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ACarpocalypsePawn::StaticClass();
}

