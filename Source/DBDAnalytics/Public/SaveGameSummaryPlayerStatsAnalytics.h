#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SaveGameSummaryPlayerStatsAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameSummaryPlayerStatsAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OwnedPerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerStatsProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodwebPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 CumulativePlaytime;

public:
	DBDANALYTICS_API FSaveGameSummaryPlayerStatsAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FSaveGameSummaryPlayerStatsAnalytics) { return 0; }
