#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LoadingStepAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLoadingStepAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString match_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString lobby_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString step_change_timestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString loading_step;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float time_on_prev_step;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float total_load_time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString current_map_name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString transition_id;

public:
	DBDANALYTICS_API FLoadingStepAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingStepAnalytics) { return 0; }
