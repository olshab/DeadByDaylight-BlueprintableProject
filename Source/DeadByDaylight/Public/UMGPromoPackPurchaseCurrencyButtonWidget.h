#pragma once

#include "CoreMinimal.h"
#include "UMGBaseCurrencyButtonWidget.h"
#include "UMGPromoPackPurchaseCurrencyButtonWidget.generated.h"

class UTextBlock;
class UOverlay;
class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPromoPackPurchaseCurrencyButtonWidget : public UUMGBaseCurrencyButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PercentageDiscountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* UndiscountedPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* PercentageDiscountCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UOverlay* OverlayUndiscountedPrice;

public:
	UUMGPromoPackPurchaseCurrencyButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPromoPackPurchaseCurrencyButtonWidget) { return 0; }
