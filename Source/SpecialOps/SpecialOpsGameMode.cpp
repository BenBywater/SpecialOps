// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SpecialOps.h"
#include "SpecialOpsGameMode.h"
#include "SpecialOpsHUD.h"
#include "SpecialOpsCharacter.h"

ASpecialOpsGameMode::ASpecialOpsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASpecialOpsHUD::StaticClass();
}
