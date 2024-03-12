#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "PriceTagViewData.h"
#include "CorePriceTagWidget.generated.h"

class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCorePriceTagWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* CurrencyIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowBackground;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetHighlightInsufficientCurrency(const bool highlight);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FPriceTagViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBackgroundVisible(const bool showBackgroundNew);

public:
	UCorePriceTagWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePriceTagWidget) { return 0; }
