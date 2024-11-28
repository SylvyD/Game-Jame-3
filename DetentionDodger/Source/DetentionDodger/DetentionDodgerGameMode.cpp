// Copyright Epic Games, Inc. All Rights Reserved.

#include "DetentionDodgerGameMode.h"
#include "DetentionDodgerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADetentionDodgerGameMode::ADetentionDodgerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
