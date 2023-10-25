#pragma once

#include "CoreMinimal.h"
#include "CoreKeyListenerButtonWidget.h"
#include "PriceTagViewData.h"
#include "CoreCurrencyButtonWidget.generated.h"

class UCorePriceTagWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreCurrencyButtonWidget : public UCoreKeyListenerButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCorePriceTagWidget* PriceTag;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCurrencyData(const FPriceTagViewData& currencyData);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetBackgroundVisible(const bool showBackground) const;

public:
	UCoreCurrencyButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyButtonWidget) { return 0; }
