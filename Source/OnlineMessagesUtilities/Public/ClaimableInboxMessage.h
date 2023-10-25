#pragma once

#include "CoreMinimal.h"
#include "ClaimableInboxMessageData.h"
#include "EClaimableInboxMessageState.h"
#include "ClaimableInboxMessage.generated.h"

USTRUCT(BlueprintType)
struct FClaimableInboxMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FClaimableInboxMessageData> Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EClaimableInboxMessageState State;

public:
	ONLINEMESSAGESUTILITIES_API FClaimableInboxMessage();
};

FORCEINLINE uint32 GetTypeHash(const FClaimableInboxMessage) { return 0; }
