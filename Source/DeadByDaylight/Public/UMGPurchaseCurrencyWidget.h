#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGPurchaseCurrencyWidget.generated.h"

class UTextBlock;
class UOverlay;
class UImage;
class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPurchaseCurrencyWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PercentageDiscountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CurrencyIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PriceText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* UndiscountedPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CurrencyColorImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UOverlay* OriginalPriceOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* DiscountCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor AffordableColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor NotAffordableColor;

public:
	UUMGPurchaseCurrencyWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPurchaseCurrencyWidget) { return 0; }
