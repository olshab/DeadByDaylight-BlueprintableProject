#pragma once

#include "CoreMinimal.h"
#include "ModalWidget.h"
#include "NotEnoughCurrencyModalViewData.h"
#include "NotEnoughCurrencyModalWidget.generated.h"

class UDBDRichTextBlock;
class UCoreKeyListenerButtonWidget;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UNotEnoughCurrencyModalWidget : public UModalWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ContentRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreKeyListenerButtonWidget* Button;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTooltipData(const FNotEnoughCurrencyModalViewData& data);

private:
	UFUNCTION(BlueprintCallable)
	void OnUnhovered(UCoreButtonWidget* unhoveredButton);

	UFUNCTION(BlueprintCallable)
	void OnHovered(UCoreButtonWidget* hoveredButton);

	UFUNCTION(BlueprintCallable)
	void OnButtonClicked(UCoreButtonWidget* clickedButton);

public:
	UNotEnoughCurrencyModalWidget();
};

FORCEINLINE uint32 GetTypeHash(const UNotEnoughCurrencyModalWidget) { return 0; }
