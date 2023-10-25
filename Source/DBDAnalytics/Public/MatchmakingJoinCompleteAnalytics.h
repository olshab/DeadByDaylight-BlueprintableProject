#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingJoinCompleteAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingJoinCompleteAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SessionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Result;

public:
	DBDANALYTICS_API FMatchmakingJoinCompleteAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingJoinCompleteAnalytics) { return 0; }
