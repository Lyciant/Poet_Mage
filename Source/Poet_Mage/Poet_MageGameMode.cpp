// Copyright Epic Games, Inc. All Rights Reserved.

#include "Poet_MageGameMode.h"
#include "Poet_MageCharacter.h"
#include "UObject/ConstructorHelpers.h"

APoet_MageGameMode::APoet_MageGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
