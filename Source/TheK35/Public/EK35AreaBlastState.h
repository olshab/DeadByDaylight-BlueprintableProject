#pragma once

#include "CoreMinimal.h"
#include "EK35AreaBlastState.generated.h"

UENUM(BlueprintType)
enum class EK35AreaBlastState : uint8
{
	Inactive,
	BeforeGrowing,
	Growing,
	BeforeShrinking,
	Shrinking,
};
