#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrencyParameters.h"
#include "ShopTransactionVirtualCurrency.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionVirtualCurrency
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FShopTransactionVirtualCurrencyParameters virtualCurrency;

public:
	DEADBYDAYLIGHT_API FShopTransactionVirtualCurrency();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionVirtualCurrency) { return 0; }
