#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "PurchaseCurrencyData.generated.h"

USTRUCT(BlueprintType)
struct FPurchaseCurrencyData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Price;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float DiscountPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAffordable;

public:
	DEADBYDAYLIGHT_API FPurchaseCurrencyData();
};

FORCEINLINE uint32 GetTypeHash(const FPurchaseCurrencyData) { return 0; }
