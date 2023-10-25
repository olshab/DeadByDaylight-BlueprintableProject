#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CurrencyLabelViewData.h"
#include "CoreCurrencyLabelWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCurrencyLabelWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateCurrency(int32 newBalance, int32 previousBalance);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FCurrencyLabelViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayNotEnoughCurrency();

public:
	UCoreCurrencyLabelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyLabelWidget) { return 0; }
