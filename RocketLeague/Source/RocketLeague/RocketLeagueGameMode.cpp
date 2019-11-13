// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RocketLeagueGameMode.h"
#include "RocketLeaguePawn.h"
#include "RocketLeagueHud.h"

ARocketLeagueGameMode::ARocketLeagueGameMode()
{
	DefaultPawnClass = ARocketLeaguePawn::StaticClass();
	HUDClass = ARocketLeagueHud::StaticClass();
}
