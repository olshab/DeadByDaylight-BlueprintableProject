#pragma once

#include "CoreMinimal.h"
#include "S3PrestigeConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3PrestigeConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxPrestige;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> PerkThresholds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PrestigeCost;

public:
	DEADBYDAYLIGHT_API FS3PrestigeConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3PrestigeConfig) { return 0; }
