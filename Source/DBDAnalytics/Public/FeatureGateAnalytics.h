#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FeatureGateAnalyticsDBDFeature.h"
#include "FeatureGateAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FFeatureGateAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FFeatureGateAnalyticsDBDFeature> Features;

public:
	DBDANALYTICS_API FFeatureGateAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FFeatureGateAnalytics) { return 0; }
