#pragma once

#include "CoreMinimal.h"
#include "ELobbyCharactersMenuState.generated.h"

UENUM(BlueprintType)
enum class ELobbyCharactersMenuState : uint8
{
	Selection,
	Customizations,
	Bio,
};
