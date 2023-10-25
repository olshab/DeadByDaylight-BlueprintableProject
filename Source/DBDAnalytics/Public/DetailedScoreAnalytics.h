#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DetailedScoreAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FDetailedScoreAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ScorerMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TargetMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ScoreTypeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScoreExperience;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ElapsedMatchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InstigatorCoordinateX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InstigatorCoordinateY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InstigatorCoordinateZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetCoordinateX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetCoordinateY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetCoordinateZ;

public:
	DBDANALYTICS_API FDetailedScoreAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDetailedScoreAnalytics) { return 0; }
