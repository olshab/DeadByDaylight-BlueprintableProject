#pragma once

#include "CoreMinimal.h"
#include "ItemsAssetLibrary.h"
#include "MenuAssetLibrary.generated.h"

UCLASS(Blueprintable)
class UMenuAssetLibrary : public UItemsAssetLibrary
{
	GENERATED_BODY()

public:
	UMenuAssetLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UMenuAssetLibrary) { return 0; }
