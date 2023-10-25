#pragma once

#include "CoreMinimal.h"
#include "CustomizationBaseAnalytics.h"
#include "CustomizationAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationAnalytics: public FCustomizationBaseAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

public:
	DBDANALYTICS_API FCustomizationAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationAnalytics) { return 0; }
