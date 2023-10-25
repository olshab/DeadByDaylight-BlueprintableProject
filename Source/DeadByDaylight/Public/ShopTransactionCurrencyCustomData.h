#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionCurrencyProducts.h"
#include "ShopTransactionCurrencyCustomData.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionCurrencyCustomData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FShopTransactionCurrencyProducts productsReceived;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString transactionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString transactionType;

public:
	DEADBYDAYLIGHT_API FShopTransactionCurrencyCustomData();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionCurrencyCustomData) { return 0; }
