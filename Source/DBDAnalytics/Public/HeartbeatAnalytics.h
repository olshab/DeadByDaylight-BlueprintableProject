#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "HeartbeatAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FHeartbeatAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BeatTime;

public:
	DBDANALYTICS_API FHeartbeatAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FHeartbeatAnalytics) { return 0; }
