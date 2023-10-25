#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrency.h"
#include "ShopTransactionCurrencyProducts.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionCurrencyProducts
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FShopTransactionVirtualCurrency> virtualCurrencies;

public:
	DEADBYDAYLIGHT_API FShopTransactionCurrencyProducts();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionCurrencyProducts) { return 0; }
