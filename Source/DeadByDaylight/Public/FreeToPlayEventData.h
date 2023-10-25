#pragma once

#include "CoreMinimal.h"
#include "FreeToPlayData.h"
#include "FreeToPlayEventData.generated.h"

USTRUCT(BlueprintType)
struct FFreeToPlayEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFreeToPlayData Event;

public:
	DEADBYDAYLIGHT_API FFreeToPlayEventData();
};

FORCEINLINE uint32 GetTypeHash(const FFreeToPlayEventData) { return 0; }
