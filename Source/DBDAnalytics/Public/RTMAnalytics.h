#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "RTMAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FRTMAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RTMType;

	UPROPERTY(EditAnywhere)
	uint32 RTMSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CurrentGameFlowStep;

public:
	DBDANALYTICS_API FRTMAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FRTMAnalytics) { return 0; }
