#pragma once

#include "CoreMinimal.h"
#include "S3MirrorsDefaultRetryPolicyConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3MirrorsDefaultRetryPolicyConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RetryCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Timeout;

public:
	DEADBYDAYLIGHT_API FS3MirrorsDefaultRetryPolicyConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3MirrorsDefaultRetryPolicyConfig) { return 0; }
