// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Alien_SwarmGameMode.h"
#include "Alien_SwarmHUD.h"
#include "Alien_SwarmCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAlien_SwarmGameMode::AAlien_SwarmGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAlien_SwarmHUD::StaticClass();
}
