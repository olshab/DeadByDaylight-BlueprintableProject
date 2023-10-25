#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "ECurrencyType.h"
#include "UObject/SoftObjectPtr.h"
#include "ArchiveTierPurchasePopupViewData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UArchiveTierPurchasePopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> ImageTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxTiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 UnitPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float DiscountPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAffordable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentWalletAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InitialQuantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FirstBonusTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LastBonusTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsBonusTier;

public:
	UArchiveTierPurchasePopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveTierPurchasePopupViewData) { return 0; }
