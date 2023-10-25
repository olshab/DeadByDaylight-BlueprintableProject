#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EACAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FEACAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LogMessage;

public:
	DBDANALYTICS_API FEACAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEACAnalytics) { return 0; }
