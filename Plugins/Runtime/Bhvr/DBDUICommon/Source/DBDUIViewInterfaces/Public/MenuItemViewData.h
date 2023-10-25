#pragma once

#include "CoreMinimal.h"
#include "MenuLoadoutPartViewData.h"
#include "MenuItemViewData.generated.h"

UCLASS(Blueprintable)
class UMenuItemViewData : public UMenuLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UMenuItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const UMenuItemViewData) { return 0; }
