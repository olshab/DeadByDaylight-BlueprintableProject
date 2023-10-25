#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkAdvancedInitializationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 IO_MemorySize;

	UPROPERTY(EditAnywhere)
	uint32 IO_Granularity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetAutoStreamBufferLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseStreamCache;

	UPROPERTY(EditAnywhere)
	uint32 MaximumPinnedBytesInCache;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableGameSyncPreparation;

	UPROPERTY(EditAnywhere)
	uint32 ContinuousPlaybackLookAhead;

	UPROPERTY(EditAnywhere)
	uint32 MonitorQueuePoolSize;

	UPROPERTY(EditAnywhere)
	uint32 MaximumHardwareTimeoutMs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DebugOutOfRangeCheckEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DebugOutOfRangeLimit;

public:
	AKAUDIO_API FAkAdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkAdvancedInitializationSettings) { return 0; }
