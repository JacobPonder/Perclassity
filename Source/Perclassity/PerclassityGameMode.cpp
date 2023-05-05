// Copyright Epic Games, Inc. All Rights Reserved.

#include "PerclassityGameMode.h"
#include "PerclassityHUD.h"
#include "PerclassityCharacter.h"
#include "UObject/ConstructorHelpers.h"

APerclassityGameMode::APerclassityGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APerclassityHUD::StaticClass();
}
