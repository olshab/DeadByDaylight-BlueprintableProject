#pragma once

#include "CoreMinimal.h"
#include "EK35KillerTeleportPointState.generated.h"

UENUM(BlueprintType)
enum class EK35KillerTeleportPointState : uint8
{
	None,
	Cooldown,
	Active,
};
