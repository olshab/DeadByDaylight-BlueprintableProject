#pragma once

#include "CoreMinimal.h"
#include "S3ContentVersionConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3ContentVersionConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool dsNewContentShutdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float dsNewContentShutdownMinMinutes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float dsNewContentShutdownMaxMinutes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool clientNewContentForceReboot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool dsNewContentCatalogItemValidation;

public:
	DEADBYDAYLIGHT_API FS3ContentVersionConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3ContentVersionConfig) { return 0; }
