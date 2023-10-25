#pragma once

#include "CoreMinimal.h"
#include "CurrencyPurchaseData.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaAuricCellPacksUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaAuricCellPacksUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FCurrencyPurchaseData> CurrencyPurchaseData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 FirstPurchaseBundleMultiplier;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime FirstPurchaseBundleMultiplierEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSet;

public:
	DEADBYDAYLIGHT_API FAtlantaAuricCellPacksUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaAuricCellPacksUIData) { return 0; }
