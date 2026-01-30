// Copyright Epic Games, Inc. All Rights Reserved.

#include "GGJ_GameMode.h"
#include "GGJ_Character.h"
#include "UObject/ConstructorHelpers.h"

AGGJ_GameMode::AGGJ_GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
