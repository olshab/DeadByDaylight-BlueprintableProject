#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECurrencyType.h"
#include "UMGCustomizationItemPriceWidget.h"
#include "UMGCustomizationItemBuyButton.generated.h"

class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCustomizationItemBuyButton : public UUMGCustomizationItemPriceWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CurrencyColorStripe;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ECurrencyType, FColor> _currencyStripeColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _disabledOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _enabledOpacity;

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastUnlockWithCurrency();

public:
	UUMGCustomizationItemBuyButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationItemBuyButton) { return 0; }
