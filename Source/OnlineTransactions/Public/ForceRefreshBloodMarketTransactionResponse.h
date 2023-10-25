#pragma once

#include "CoreMinimal.h"
#include "OnlineTransactionResponseBase.h"
#include "ForceRefreshBloodMarketTransactionResponse.generated.h"

UCLASS(Blueprintable)
class ONLINETRANSACTIONS_API UForceRefreshBloodMarketTransactionResponse : public UOnlineTransactionResponseBase
{
	GENERATED_BODY()

public:
	UForceRefreshBloodMarketTransactionResponse();
};

FORCEINLINE uint32 GetTypeHash(const UForceRefreshBloodMarketTransactionResponse) { return 0; }
