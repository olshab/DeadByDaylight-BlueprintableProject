#pragma once

#include "CoreMinimal.h"
#include "ELobbyMenuState.generated.h"

UENUM(BlueprintType)
enum class ELobbyMenuState : uint8
{
	None,
	Characters,
	Scaleform,
};
