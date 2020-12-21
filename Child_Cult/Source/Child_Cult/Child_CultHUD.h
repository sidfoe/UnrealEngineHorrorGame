// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Child_CultHUD.generated.h"

UCLASS()
class AChild_CultHUD : public AHUD
{
	GENERATED_BODY()

public:
	AChild_CultHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

