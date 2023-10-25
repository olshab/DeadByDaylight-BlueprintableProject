#pragma once

#include "CoreMinimal.h"
#include "ClaimableInboxMessage.h"
#include "UObject/NoExportTypes.h"
#include "EInboxMessageUIType.h"
#include "EInboxMessageUIState.h"
#include "InboxMessageUIData.generated.h"

USTRUCT(BlueprintType)
struct FInboxMessageUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MessageId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime ReceivedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInboxMessageUIType MessageType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MessageTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MessageBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInboxMessageUIState MessageState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FClaimableInboxMessage AttachedClaimable;

public:
	DEADBYDAYLIGHT_API FInboxMessageUIData();
};

FORCEINLINE uint32 GetTypeHash(const FInboxMessageUIData) { return 0; }
