#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ScoreAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FScoreAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ScoreTypeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScoreCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ScoreBloodwebPoints;

public:
	DBDANALYTICS_API FScoreAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FScoreAnalytics) { return 0; }
