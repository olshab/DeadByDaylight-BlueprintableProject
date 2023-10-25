#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchRatingAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchRatingAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

public:
	DBDANALYTICS_API FMatchRatingAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchRatingAnalytics) { return 0; }
