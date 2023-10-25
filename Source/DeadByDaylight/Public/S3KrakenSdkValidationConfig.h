#pragma once

#include "CoreMinimal.h"
#include "S3KrakenSdkValidationConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3KrakenSdkValidationConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Whitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Whitelist_IsSet;

public:
	DEADBYDAYLIGHT_API FS3KrakenSdkValidationConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3KrakenSdkValidationConfig) { return 0; }
