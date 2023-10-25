#pragma once

#include "CoreMinimal.h"
#include "CoreKeyListenerInputPromptWidget.h"
#include "PriceTagViewData.h"
#include "CoreCurrencyPromptWidget.generated.h"

class UCorePriceTagWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreCurrencyPromptWidget : public UCoreKeyListenerInputPromptWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCorePriceTagWidget* PriceTag;

public:
	UFUNCTION(BlueprintPure)
	void SetCurrencyData(const FPriceTagViewData& currencyData) const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetBackgroundVisible(const bool showBackground) const;

public:
	UCoreCurrencyPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyPromptWidget) { return 0; }
