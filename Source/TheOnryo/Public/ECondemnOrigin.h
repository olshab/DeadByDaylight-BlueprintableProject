#pragma once

#include "CoreMinimal.h"
#include "ECondemnOrigin.generated.h"

UENUM(BlueprintType)
enum class ECondemnOrigin : uint8
{
	None,
	Addon,
	BasicAttack,
	PlayerHook,
	Teleport,
	VHS,
};
