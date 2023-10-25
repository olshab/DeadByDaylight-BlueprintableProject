#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InGameAssetPreloaderGatherer.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UInGameAssetPreloaderGatherer : public UObject
{
	GENERATED_BODY()

public:
	UInGameAssetPreloaderGatherer();
};

FORCEINLINE uint32 GetTypeHash(const UInGameAssetPreloaderGatherer) { return 0; }
