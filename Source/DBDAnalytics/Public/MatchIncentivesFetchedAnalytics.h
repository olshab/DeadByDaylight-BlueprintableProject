#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchIncentivesFetchedAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchIncentivesFetchedAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 KillerPercentageIncentive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SurvivorPercentageIncentive;

public:
	DBDANALYTICS_API FMatchIncentivesFetchedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchIncentivesFetchedAnalytics) { return 0; }
