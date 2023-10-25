#pragma once

#include "CoreMinimal.h"
#include "MatchmakingAnalytics.h"
#include "MatchmakingQueueAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingQueueAnalytics: public FMatchmakingAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString QueueStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString QueueEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString QueueResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CrossPlayEnabled;

public:
	DBDANALYTICS_API FMatchmakingQueueAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingQueueAnalytics) { return 0; }
