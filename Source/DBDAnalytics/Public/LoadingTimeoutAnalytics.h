#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LoadingTimeoutAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLoadingTimeoutAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString match_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString lobby_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString timeout_timestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float total_load_time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString current_map_name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString transition_id;

public:
	DBDANALYTICS_API FLoadingTimeoutAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingTimeoutAnalytics) { return 0; }
