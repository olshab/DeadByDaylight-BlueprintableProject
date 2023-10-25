#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionItem.h"
#include "ShopTransactionItemProducts.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionItemProducts
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FShopTransactionItem> items;

public:
	DEADBYDAYLIGHT_API FShopTransactionItemProducts();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionItemProducts) { return 0; }
