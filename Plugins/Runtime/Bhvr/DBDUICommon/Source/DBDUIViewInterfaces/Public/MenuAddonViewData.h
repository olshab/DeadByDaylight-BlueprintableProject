#pragma once

#include "CoreMinimal.h"
#include "MenuLoadoutPartViewData.h"
#include "MenuAddonViewData.generated.h"

UCLASS(Blueprintable)
class UMenuAddonViewData : public UMenuLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UMenuAddonViewData();
};

FORCEINLINE uint32 GetTypeHash(const UMenuAddonViewData) { return 0; }
