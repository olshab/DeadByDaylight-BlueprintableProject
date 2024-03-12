#pragma once

#include "CoreMinimal.h"
#include "CoreKeyListenerInputPromptWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"
#include "CoreCurrencyInputPromptWidget.generated.h"

class UCurveFloat;
class UCorePriceTagWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreCurrencyInputPromptWidget : public UCoreKeyListenerInputPromptWidget
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
	UFUNCTION(BlueprintCallable)
	void SetCurrencyData(const FPriceTagViewData& currencyData);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetBackgroundVisible(const bool showBackground) const;

	UFUNCTION(BlueprintPure)
	ECurrencyType GetCurrencyType() const;

public:
	UCoreCurrencyInputPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyInputPromptWidget) { return 0; }
