#pragma once

#include "CoreMinimal.h"
#include "S3SeenPopupsConfigEntry.h"
#include "S3SeenPopupsConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3SeenPopupsConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FS3SeenPopupsConfigEntry> Configs;

public:
	DEADBYDAYLIGHT_API FS3SeenPopupsConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3SeenPopupsConfig) { return 0; }
