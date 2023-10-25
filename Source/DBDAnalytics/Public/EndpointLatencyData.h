#pragma once

#include "CoreMinimal.h"
#include "EndpointLatencyData.generated.h"

USTRUCT(BlueprintType)
struct FEndpointLatencyData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere)
	uint32 Latency;

public:
	DBDANALYTICS_API FEndpointLatencyData();
};

FORCEINLINE uint32 GetTypeHash(const FEndpointLatencyData) { return 0; }
