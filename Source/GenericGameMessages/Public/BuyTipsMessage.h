#pragma once

#include "CoreMinimal.h"
#include "BuyTipsMessage.generated.h"

USTRUCT(BlueprintType)
struct FBuyTipsMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Result;

public:
	GENERICGAMEMESSAGES_API FBuyTipsMessage();
};

FORCEINLINE uint32 GetTypeHash(const FBuyTipsMessage) { return 0; }
