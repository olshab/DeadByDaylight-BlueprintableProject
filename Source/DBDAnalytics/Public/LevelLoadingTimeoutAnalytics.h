#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LevelLoadingTimeoutAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLevelLoadingTimeoutAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Seed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeElapsed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeElapsedInStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoadingStep;

public:
	DBDANALYTICS_API FLevelLoadingTimeoutAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLevelLoadingTimeoutAnalytics) { return 0; }
