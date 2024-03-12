#pragma once

#include "CoreMinimal.h"
#include "CoreInputSwitcherWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"
#include "CoreCurrencyInputSwitcherWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreCurrencyInputSwitcherWidget : public UCoreInputSwitcherWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	void SetCurrencyData(const FPriceTagViewData& currencyData) const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetBackgroundVisible(const bool showBackground) const;

private:
	UFUNCTION(BlueprintCallable)
	void OnInputSwitcherTriggered();

public:
	UFUNCTION(BlueprintPure)
	ECurrencyType GetCurrencyType() const;

public:
	UCoreCurrencyInputSwitcherWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyInputSwitcherWidget) { return 0; }
