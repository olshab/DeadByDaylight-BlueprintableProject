#pragma once

#include "CoreMinimal.h"
#include "S3OnlineConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3OnlineConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> HiddenProgressiveQueueDelays;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HiddenQueueDelayResetThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RandomQueueDelayMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RandomQueueDelayMax;

public:
	DEADBYDAYLIGHT_API FS3OnlineConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3OnlineConfig) { return 0; }
