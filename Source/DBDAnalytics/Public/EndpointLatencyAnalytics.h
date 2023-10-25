#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EndpointLatencyData.h"
#include "EndpointLatencyAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FEndpointLatencyAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEndpointLatencyData> Endpoints;

public:
	DBDANALYTICS_API FEndpointLatencyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEndpointLatencyAnalytics) { return 0; }
