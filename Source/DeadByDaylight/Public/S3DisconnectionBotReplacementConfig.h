#pragma once

#include "CoreMinimal.h"
#include "S3DisconnectionBotReplacementConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3DisconnectionBotReplacementConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableDisconnectionBotReplacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ReplacementBotRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsePlayerRankForReplacementBot;

public:
	DEADBYDAYLIGHT_API FS3DisconnectionBotReplacementConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3DisconnectionBotReplacementConfig) { return 0; }
