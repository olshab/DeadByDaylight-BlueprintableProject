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
	TArray<FString> DetailedScoreTypeWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool DetailedScoreTypeWhitelist_IsSet;

public:
	DEADBYDAYLIGHT_API FS3AnalyticsConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3AnalyticsConfig) { return 0; }
