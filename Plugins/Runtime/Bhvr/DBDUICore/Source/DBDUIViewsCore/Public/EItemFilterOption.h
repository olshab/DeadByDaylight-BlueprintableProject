#pragma once

#include "CoreMinimal.h"
#include "EItemFilterOption.generated.h"

UENUM(BlueprintType)
enum class EItemFilterOption : uint8
{
	None,
	Favorite,
	Owned,
	Common,
	Uncommon,
	Rare,
	VeryRare,
	UltraRare,
	Legendary,
	Event,
};
