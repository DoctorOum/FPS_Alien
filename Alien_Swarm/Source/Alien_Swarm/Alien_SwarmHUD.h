// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Alien_SwarmHUD.generated.h"

UCLASS()
class AAlien_SwarmHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAlien_SwarmHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

