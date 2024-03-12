#pragma once

#include "CoreMinimal.h"
#include "ERewardPopupType.generated.h"

UENUM(BlueprintType)
enum class ERewardPopupType : uint8
{
	None,
	Currency,
	Inventory,
};
