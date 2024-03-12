#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "AuricCellsBuyActionDelegate.h"
#include "AuricCellsBundleViewData.h"
#include "CoreAuricCellsBundleWidget.generated.h"

class UDBDImage;
class UCoreButtonWidget;
class UCorePremiumCurrencyButtonWidget;
class UPanelWidget;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAuricCellsBundleWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAuricCellsBuyActionDelegate _buyActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePremiumCurrencyButtonWidget* BuyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* BaseAmountTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* AmountTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPanelWidget* BonusPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* BonusTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* InfoTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* IconImage;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetupAsReward();

	UFUNCTION(BlueprintCallable)
	void SetData(const FAuricCellsBundleViewData& bundleData);

protected:
	UFUNCTION(BlueprintCallable)
	void OnBuyButtonClicked(UCoreButtonWidget* buttonTarget);

public:
	UCoreAuricCellsBundleWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAuricCellsBundleWidget) { return 0; }
