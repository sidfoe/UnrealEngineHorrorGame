// Copyright Epic Games, Inc. All Rights Reserved.

#include "Child_CultGameMode.h"
#include "Child_CultHUD.h"
#include "Child_CultCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChild_CultGameMode::AChild_CultGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AChild_CultHUD::StaticClass();
}
