#pragma once

#include "CoreMinimal.h"
#include "CoreKeyListenerButtonWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"
#include "CoreCurrencyButtonWidget.generated.h"

class UCorePriceTagWidget;
class UCoreButtonWidget;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class UCoreCurrencyButtonWidget : public UCoreKeyListenerButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePriceTagWidget* PriceTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _chargeToUnlockCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _chargeToUnlockDuration;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCurrencyData(const FPriceTagViewData& currencyData);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetBackgroundVisible(const bool showBackground) const;

private:
	UFUNCTION(BlueprintCallable)
	void OnCurrencyButtonPressed(UCoreButtonWidget* button);

public:
	UFUNCTION(BlueprintPure)
	ECurrencyType GetCurrencyType() const;

public:
	UCoreCurrencyButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyButtonWidget) { return 0; }
