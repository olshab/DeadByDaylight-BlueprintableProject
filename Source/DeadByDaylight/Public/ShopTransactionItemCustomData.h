#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionItemProducts.h"
#include "ShopTransactionItemCustomData.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionItemCustomData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FShopTransactionItemProducts productsReceived;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString transactionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString transactionType;

public:
	DEADBYDAYLIGHT_API FShopTransactionItemCustomData();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionItemCustomData) { return 0; }
