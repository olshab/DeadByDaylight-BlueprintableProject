#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAtlantaPurchasePopup.generated.h"

class UUMGBaseButtonWidget;
class UHorizontalBox;
class UImage;
class UWidgetSwitcher;
class UUMGPurchaseBuyButton;
class UTextBlock;
class UUMGPurchaseSticker;
class UUMGPurchaseItemsInfo;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaPurchasePopup : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* LayoutSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ImagePopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* OfferTextWithInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* OfferText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TitleTextWithInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* DescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* ItemsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGPurchaseBuyButton* BuyButtonWithInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGPurchaseBuyButton* BuyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* CloseButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGPurchaseSticker* PurchaseSticker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGPurchaseItemsInfo> PurchaseItemsInfoWidgetClass;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleCloseButtonClicked();

	UFUNCTION(BlueprintCallable)
	void HandleBuyButtonClicked();

public:
	UUMGAtlantaPurchasePopup();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaPurchasePopup) { return 0; }
