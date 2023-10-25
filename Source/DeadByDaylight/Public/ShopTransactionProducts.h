#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrency.h"
#include "ShopTransactionItem.h"
#include "ShopTransactionProducts.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionProducts
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FShopTransactionVirtualCurrency> virtualCurrencies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FShopTransactionItem> items;

public:
	DEADBYDAYLIGHT_API FShopTransactionProducts();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionProducts) { return 0; }
