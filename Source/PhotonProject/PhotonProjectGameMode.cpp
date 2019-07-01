// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PhotonProjectGameMode.h"
#include "PhotonProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

APhotonProjectGameMode::APhotonProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
