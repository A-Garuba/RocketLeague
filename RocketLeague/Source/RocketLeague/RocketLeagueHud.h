// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "RocketLeagueHud.generated.h"

UCLASS(config = Game)
class ARocketLeagueHud : public AHUD
{
	GENERATED_BODY()

public:
	ARocketLeagueHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
