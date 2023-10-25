#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LevelLoadingStepAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLevelLoadingStepAnalytics: public FUniquelyIdentifiedAnalytic
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTimeout;

public:
	DBDANALYTICS_API FLevelLoadingStepAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLevelLoadingStepAnalytics) { return 0; }
