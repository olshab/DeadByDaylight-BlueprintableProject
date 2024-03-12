#pragma once

#include "CoreMinimal.h"
#include "EBloodZoneState.generated.h"

UENUM(BlueprintType)
enum class EBloodZoneState : uint8
{
	Inactive,
	ProtectedSurvivor,
	ProtectedKiller,
	Vulnerable,
};
