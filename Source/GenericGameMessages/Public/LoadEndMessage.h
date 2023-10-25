#pragma once

#include "CoreMinimal.h"
#include "LoadEndMessage.generated.h"

USTRUCT(BlueprintType)
struct FLoadEndMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FLoadEndMessage();
};

FORCEINLINE uint32 GetTypeHash(const FLoadEndMessage) { return 0; }
