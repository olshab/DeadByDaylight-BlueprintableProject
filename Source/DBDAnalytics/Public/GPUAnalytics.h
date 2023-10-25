#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "GPUAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FGPUAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Marker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageMS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StdDevMs;

public:
	DBDANALYTICS_API FGPUAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FGPUAnalytics) { return 0; }
