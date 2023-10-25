#pragma once

#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "UMGBaseRootStorefrontWidget.generated.h"

class UPanelWidget;
class UUMGBaseButtonWidget;
class UNamedSlot;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGBaseRootStorefrontWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UNamedSlot* StorePageSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* BackButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* CurrencyButtonsPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* StorefrontTitle;

protected:
	UFUNCTION(BlueprintCallable)
	void OnPurchaseAuricCellButtonPressed();

	UFUNCTION(BlueprintCallable)
	void OnCurrencyButtonLongPressed(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void OnBackButtonPressed();

public:
	UUMGBaseRootStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseRootStorefrontWidget) { return 0; }
