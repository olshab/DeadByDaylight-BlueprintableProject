#pragma once

#include "CoreMinimal.h"
#include "ArchiveTierPurchasePopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "Styling/SlateColor.h"
#include "ECurrencyType.h"
#include "ConfirmPurchase.h"
#include "CoreArchiveTierPurchasePopupWidget.generated.h"

class UCurveFloat;
class UDBDImage;
class UDBDTextBlock;
class UCoreInputSwitcherWidget;
class UArchiveTierPurchasePopupViewData;
class UDBDRichTextBlock;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveTierPurchasePopupWidget : public UCoreGenericPopupWidget, public IArchiveTierPurchasePopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* LessInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* MoreInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* CurrentQuantityText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* ImageContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UOverlay* PriceContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* PriceText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* DiscountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _quantityCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _bonusTierStyleName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ECurrencyType, FSlateColor> _currencyTextColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor _unaffordablePriceColor;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FConfirmPurchase _confirmPurchaseDelegate;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualData(const UArchiveTierPurchasePopupViewData* viewData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCurrencyIcon(const ECurrencyType currencyType);

private:
	UFUNCTION(BlueprintCallable)
	void OnMoreInputTriggered();

	UFUNCTION(BlueprintCallable)
	void OnLessInputTriggered();

	UFUNCTION(BlueprintCallable)
	void OnConfirmPurchase();

public:
	UCoreArchiveTierPurchasePopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveTierPurchasePopupWidget) { return 0; }
