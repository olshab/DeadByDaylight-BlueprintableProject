#pragma once

#include "CoreMinimal.h"
#include "FeatureGateAnalyticsDBDFeature.generated.h"

USTRUCT(BlueprintType)
struct FFeatureGateAnalyticsDBDFeature
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName State;

public:
	DBDANALYTICS_API FFeatureGateAnalyticsDBDFeature();
};

FORCEINLINE uint32 GetTypeHash(const FFeatureGateAnalyticsDBDFeature) { return 0; }
