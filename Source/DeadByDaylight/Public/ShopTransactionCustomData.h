#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionProducts.h"
#include "ShopTransactionCustomData.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionCustomData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FShopTransactionProducts productsReceived;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString transactionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString transactionType;

public:
	DEADBYDAYLIGHT_API FShopTransactionCustomData();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionCustomData) { return 0; }
