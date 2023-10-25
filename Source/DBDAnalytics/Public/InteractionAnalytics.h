#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "InteractionAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FInteractionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InterruptionSuccessCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InterruptionFailureCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InteractionPredictedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InteractionAuthorizedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InteractionDeniedByRaceConditionCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InteractionDeniedByTimeoutCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InteractionDeniedByErrorCount;

public:
	DBDANALYTICS_API FInteractionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionAnalytics) { return 0; }
