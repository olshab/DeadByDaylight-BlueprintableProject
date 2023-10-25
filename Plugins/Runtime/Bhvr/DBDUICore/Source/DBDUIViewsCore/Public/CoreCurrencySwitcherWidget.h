#pragma once

#include "CoreMinimal.h"
#include "CoreInputSwitcherWidget.h"
#include "PriceTagViewData.h"
#include "CoreCurrencySwitcherWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreCurrencySwitcherWidget : public UCoreInputSwitcherWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	void SetCurrencyData(const FPriceTagViewData& currencyData) const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetBackgroundVisible(const bool showBackground) const;

public:
	UCoreCurrencySwitcherWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencySwitcherWidget) { return 0; }
