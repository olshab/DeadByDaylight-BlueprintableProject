#pragma once

#include "CoreMinimal.h"
#include "BotMatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FBotMatchConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> DSPlatformSBM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> DSPlatformTutorialBotMatch;

public:
	DEADBYDAYLIGHT_API FBotMatchConfig();
};

FORCEINLINE uint32 GetTypeHash(const FBotMatchConfig) { return 0; }
