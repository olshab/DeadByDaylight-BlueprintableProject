#pragma once

#include "CoreMinimal.h"
#include "EPerkArchetype.generated.h"

UENUM(BlueprintType)
enum class EPerkArchetype : uint8
{
	Default,
	Hex,
	Boon,
	ScourgeHook,
	Teamwork,
	Manifestation,
};
