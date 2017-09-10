// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "SpecialOpsHUD.generated.h"

UCLASS()
class ASpecialOpsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASpecialOpsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

