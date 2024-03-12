#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "LabelTooltipWidget.generated.h"

class UDBDRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API ULabelTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LabelRTB;

public:
	UFUNCTION(BlueprintCallable)
	void SetTooltipData(const FText& labelText);

	UFUNCTION(BlueprintCallable)
	void Reset();

public:
	ULabelTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULabelTooltipWidget) { return 0; }
