#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CurrencyPurchaseData.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyPurchaseData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CurrencyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CurrencyIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrencyAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayedPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float BonusPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime BonusEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 BasicCurrencyAmount;

public:
	DEADBYDAYLIGHT_API FCurrencyPurchaseData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyPurchaseData) { return 0; }
