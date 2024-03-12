#pragma once

#include "CoreMinimal.h"
#include "EStorePackType.generated.h"

UENUM(BlueprintType)
enum class EStorePackType : uint8
{
	None,
	Special,
	Chapter,
	Heritage,
};
