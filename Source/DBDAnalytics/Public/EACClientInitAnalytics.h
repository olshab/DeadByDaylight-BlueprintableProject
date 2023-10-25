#pragma once

#include "CoreMinimal.h"
#include "EACAnalytics.h"
#include "EACClientInitAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FEACClientInitAnalytics: public FEACAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ValidationErrorType;

public:
	DBDANALYTICS_API FEACClientInitAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEACClientInitAnalytics) { return 0; }
