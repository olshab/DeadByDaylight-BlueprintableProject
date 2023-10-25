#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HudUIUtilities.generated.h"

UCLASS(Blueprintable)
class UHudUIUtilities : public UObject
{
	GENERATED_BODY()

public:
	UHudUIUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UHudUIUtilities) { return 0; }
