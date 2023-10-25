#pragma once

#include "CoreMinimal.h"
#include "HitValidationRecorder.generated.h"

USTRUCT(BlueprintType)
struct FHitValidationRecorder
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CacheTimespan;

public:
	DEADBYDAYLIGHT_API FHitValidationRecorder();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidationRecorder) { return 0; }
