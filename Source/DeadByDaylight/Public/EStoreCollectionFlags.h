#pragma once

#include "CoreMinimal.h"
#include "EStoreCollectionFlags.generated.h"

UENUM(BlueprintType)
enum class EStoreCollectionFlags : uint8
{
	None,
	IsNew,
	IsFeatured,
	IsSpecial = 4,
};
