// Copyright Epic Games, Inc. All Rights Reserved.

#include "vDUNE_UndergroundGameMode.h"
#include "vDUNE_UndergroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AvDUNE_UndergroundGameMode::AvDUNE_UndergroundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
