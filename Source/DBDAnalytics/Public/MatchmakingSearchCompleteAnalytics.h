#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingSearchCompleteAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingSearchCompleteAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Success;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumMatches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsedFallback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ConnectingToUser;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SearchParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SearchResultSettings;

public:
	DBDANALYTICS_API FMatchmakingSearchCompleteAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingSearchCompleteAnalytics) { return 0; }
