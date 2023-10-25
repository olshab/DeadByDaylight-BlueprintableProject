#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionItemParameters.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionItemParameters
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 itemAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString itemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString itemType;

public:
	DEADBYDAYLIGHT_API FShopTransactionItemParameters();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionItemParameters) { return 0; }
