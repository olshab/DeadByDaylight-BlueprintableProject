#pragma once

#include "CoreMinimal.h"
#include "S3AnalyticsConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3AnalyticsConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool GameInitVerbose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameConsoleLogMinimumVerbosity;

	UPROPERTY(EditAnywhere)
	uint32 MaxFramesUntilSend;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxTrackedRecurrences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ScoreTypeWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool ScoreTypeWhitelist_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ScoreTypeBlacklist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool ScoreTypeBlacklist_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> DetailedScoreTypeWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool DetailedScoreTypeWhitelist_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> DetailedScoreTypeBlacklist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool DetailedScoreTypeBlacklist_IsSet;

	UPROPERTY(EditAnywhere)
	uint32 PerformanceSamplingRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> PerformanceSamplingWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool PerformanceSamplingWhitelist_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> PerformanceContextWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool PerformanceContextWhitelist_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PerformanceSamplingRule;

public:
	DEADBYDAYLIGHT_API FS3AnalyticsConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3AnalyticsConfig) { return 0; }
