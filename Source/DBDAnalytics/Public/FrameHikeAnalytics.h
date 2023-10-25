#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FrameHikeAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FFrameHikeAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FrameDeltaTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeSinceApplicationStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentTimeoutThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOverConnectionTimeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CurrentMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CurrentGameMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameFlowStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CurrentGameFlowContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PreviousGameFlowContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString NavigationContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PreviousNavigationContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RecentLogs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KrakenMatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlushAsyncLoadingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FlushAsyncLoadingCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SyncLoadCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString NetMode;

public:
	DBDANALYTICS_API FFrameHikeAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FFrameHikeAnalytics) { return 0; }
