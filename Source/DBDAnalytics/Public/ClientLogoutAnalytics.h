#pragma once

#include "CoreMinimal.h"
#include "ClientConnectionBaseAnalytics.h"
#include "ClientLogoutAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FClientLogoutAnalytics: public FClientConnectionBaseAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameFlowStep;

public:
	DBDANALYTICS_API FClientLogoutAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FClientLogoutAnalytics) { return 0; }
