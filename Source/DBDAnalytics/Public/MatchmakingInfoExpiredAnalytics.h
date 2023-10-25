#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingInfoExpiredAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingInfoExpiredAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchmakingSessionGuid;

public:
	DBDANALYTICS_API FMatchmakingInfoExpiredAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingInfoExpiredAnalytics) { return 0; }
