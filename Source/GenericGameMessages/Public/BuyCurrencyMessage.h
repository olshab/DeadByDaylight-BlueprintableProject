#pragma once

#include "CoreMinimal.h"
#include "BuyCurrencyMessage.generated.h"

USTRUCT(BlueprintType)
struct FBuyCurrencyMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemId;

public:
	GENERICGAMEMESSAGES_API FBuyCurrencyMessage();
};

FORCEINLINE uint32 GetTypeHash(const FBuyCurrencyMessage) { return 0; }
