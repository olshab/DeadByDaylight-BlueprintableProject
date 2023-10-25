#pragma once

#include "CoreMinimal.h"
#include "FAQMessage.generated.h"

USTRUCT(BlueprintType)
struct FFAQMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FFAQMessage();
};

FORCEINLINE uint32 GetTypeHash(const FFAQMessage) { return 0; }
