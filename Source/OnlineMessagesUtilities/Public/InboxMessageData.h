#pragma once

#include "CoreMinimal.h"
#include "ClaimableInboxMessageData.h"
#include "InboxMessageData.generated.h"

USTRUCT(BlueprintType)
struct FInboxMessageData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int64 Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Origin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RecipientId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int64 ReceivedTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Subject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Body;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FClaimableInboxMessageData> Claimable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool AreRewardsClaimed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsRead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int64 ExpireTimestamp;

public:
	ONLINEMESSAGESUTILITIES_API FInboxMessageData();
};

FORCEINLINE uint32 GetTypeHash(const FInboxMessageData) { return 0; }
