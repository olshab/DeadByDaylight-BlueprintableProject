#pragma once

#include "CoreMinimal.h"
#include "EACAnalytics.h"
#include "EACClientViolationAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FEACClientViolationAnalytics: public FEACAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ViolationCase;

public:
	DBDANALYTICS_API FEACClientViolationAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEACClientViolationAnalytics) { return 0; }
