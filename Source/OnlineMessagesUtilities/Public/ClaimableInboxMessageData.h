#pragma once

#include "CoreMinimal.h"
#include "EClaimableInboxMessageType.h"
#include "ClaimableInboxMessageData.generated.h"

USTRUCT(BlueprintType)
struct FClaimableInboxMessageData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EClaimableInboxMessageType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

public:
	ONLINEMESSAGESUTILITIES_API FClaimableInboxMessageData();
};

FORCEINLINE uint32 GetTypeHash(const FClaimableInboxMessageData) { return 0; }
