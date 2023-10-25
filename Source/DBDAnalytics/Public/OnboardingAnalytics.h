#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "OnboardingAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FOnboardingAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GameManualIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventTimestamp;

public:
	DBDANALYTICS_API FOnboardingAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FOnboardingAnalytics) { return 0; }
