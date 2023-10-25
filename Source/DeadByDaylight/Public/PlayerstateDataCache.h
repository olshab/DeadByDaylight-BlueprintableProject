#pragma once

#include "CoreMinimal.h"
#include "AwardedScores.h"
#include "PlayerstateDataCache.generated.h"

USTRUCT(BlueprintType)
struct FPlayerstateDataCache
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FAwardedScores> awardedScoresByType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDataCacheValid;

public:
	DEADBYDAYLIGHT_API FPlayerstateDataCache();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerstateDataCache) { return 0; }
