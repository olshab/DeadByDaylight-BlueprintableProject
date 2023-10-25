#pragma once

#include "CoreMinimal.h"
#include "PurchaseCurrencyData.h"
#include "PromoPackPurchaseUIData.generated.h"

USTRUCT(BlueprintType)
struct FPromoPackPurchaseUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPurchaseCurrencyData AuricCellsPurchaseData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasAuricCellsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPurchaseCurrencyData IridescentShardsPurchaseData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasIridescentShards;

public:
	DEADBYDAYLIGHT_API FPromoPackPurchaseUIData();
};

FORCEINLINE uint32 GetTypeHash(const FPromoPackPurchaseUIData) { return 0; }
