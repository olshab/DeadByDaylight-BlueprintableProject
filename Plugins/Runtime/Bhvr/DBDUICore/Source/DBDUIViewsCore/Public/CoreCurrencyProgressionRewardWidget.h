#pragma once

#include "CoreMinimal.h"
#include "CoreRewardWidget.h"
#include "CurrencyProgressionRewardViewData.h"
#include "CoreCurrencyProgressionRewardWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCurrencyProgressionRewardWidget : public UCoreRewardWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCurrencyProgressionRewardData(const FCurrencyProgressionRewardViewData& currencyProgressionRewardViewData);

public:
	UCoreCurrencyProgressionRewardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyProgressionRewardWidget) { return 0; }
