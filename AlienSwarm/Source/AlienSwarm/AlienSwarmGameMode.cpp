// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AlienSwarmGameMode.h"
#include "AlienSwarmHUD.h"
#include "AlienSwarmCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAlienSwarmGameMode::AAlienSwarmGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAlienSwarmHUD::StaticClass();
}
