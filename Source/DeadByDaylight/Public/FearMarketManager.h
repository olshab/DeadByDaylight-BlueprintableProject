#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FearMarketItemInstance.h"
#include "FearMarketOfferingInstance.h"
#include "FearMarketManager.generated.h"

class UDBDGameInstance;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UFearMarketManager : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFearMarketItemInstance PendingPurchaseFearMarketItem;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FFearMarketOfferingInstance _existingFearMarket;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

private:
	UFUNCTION(BlueprintCallable)
	void ReceivedFearMarketData(bool success);

public:
	UFearMarketManager();
};

FORCEINLINE uint32 GetTypeHash(const UFearMarketManager) { return 0; }
