#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrencyParameters.generated.h"

USTRUCT(BlueprintType)
struct FShopTransactionVirtualCurrencyParameters
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 virtualCurrencyAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString virtualCurrencyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString virtualCurrencyType;

public:
	DEADBYDAYLIGHT_API FShopTransactionVirtualCurrencyParameters();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionVirtualCurrencyParameters) { return 0; }
