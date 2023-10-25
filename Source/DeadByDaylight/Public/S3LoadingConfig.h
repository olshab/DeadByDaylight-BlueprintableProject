#pragma once

#include "CoreMinimal.h"
#include "LoadingTimeoutPerStep.h"
#include "S3LoadingConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3LoadingConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLoadingTimeoutPerStep GlobalTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLoadingTimeoutPerStep> TimeoutPerSteps;

public:
	DEADBYDAYLIGHT_API FS3LoadingConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3LoadingConfig) { return 0; }
