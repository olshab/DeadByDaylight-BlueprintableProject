#pragma once

#include "CoreMinimal.h"
#include "SDKUIMessage.generated.h"

USTRUCT(BlueprintType)
struct FSDKUIMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FSDKUIMessage();
};

FORCEINLINE uint32 GetTypeHash(const FSDKUIMessage) { return 0; }
