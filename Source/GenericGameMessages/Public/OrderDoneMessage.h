#pragma once

#include "CoreMinimal.h"
#include "OrderDoneMessage.generated.h"

USTRUCT(BlueprintType)
struct FOrderDoneMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Code;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OrderId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OrderChannel;

public:
	GENERICGAMEMESSAGES_API FOrderDoneMessage();
};

FORCEINLINE uint32 GetTypeHash(const FOrderDoneMessage) { return 0; }
