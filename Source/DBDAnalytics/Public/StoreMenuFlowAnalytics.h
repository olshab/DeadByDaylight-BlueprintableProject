#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "StoreMenuFlowAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FStoreMenuFlowAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Data;

public:
	DBDANALYTICS_API FStoreMenuFlowAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FStoreMenuFlowAnalytics) { return 0; }
