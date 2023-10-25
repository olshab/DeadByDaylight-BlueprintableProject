#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Gameplay_PigSurvivorAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FGameplay_PigSurvivorAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RbtAttachedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ActivatedRbtTimerCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RbtSuccessSearchCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RbtFailedSearchCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RbtDisabledPreActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RbtDisabledPostActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RbtChaseDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RbtAverageTimeLeftBeforeDisable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RbtDuration;

public:
	DBDANALYTICS_API FGameplay_PigSurvivorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FGameplay_PigSurvivorAnalytics) { return 0; }
