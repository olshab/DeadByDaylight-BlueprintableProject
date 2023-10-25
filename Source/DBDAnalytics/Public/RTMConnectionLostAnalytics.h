#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "RTMConnectionLostAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FRTMConnectionLostAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ErrorCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ErrorMessage;

public:
	DBDANALYTICS_API FRTMConnectionLostAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FRTMConnectionLostAnalytics) { return 0; }
