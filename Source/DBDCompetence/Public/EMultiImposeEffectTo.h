#pragma once

#include "CoreMinimal.h"
#include "EMultiImposeEffectTo.generated.h"

UENUM(BlueprintType)
enum class EMultiImposeEffectTo : uint8
{
	EventInstigator,
	EventTarget,
	AddonOwner,
	AllSurvivors,
};
