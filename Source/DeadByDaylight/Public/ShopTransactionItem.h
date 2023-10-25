#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionItemParameters.h"
#include "ShopTransactionItem.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FShopTransactionItemParameters item;

public:
	DEADBYDAYLIGHT_API FShopTransactionItem();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionItem) { return 0; }
