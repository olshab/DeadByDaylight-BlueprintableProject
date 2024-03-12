#pragma once

#include "CoreMinimal.h"
#include "EStoreSpecialPackAvailabilityDate.generated.h"

UENUM(BlueprintType)
enum class EStoreSpecialPackAvailabilityDate : uint8
{
	Permanent,
	StartDate,
	EndDate,
};
