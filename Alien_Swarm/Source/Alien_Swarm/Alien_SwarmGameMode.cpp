// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Alien_SwarmGameMode.h"
#include "Alien_SwarmCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAlien_SwarmGameMode::AAlien_SwarmGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
