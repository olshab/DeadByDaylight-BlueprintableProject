#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "CustomizationTooltipViewData.h"
#include "CustomizationTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCustomizationTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* ToolTipStatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* ToolTipDescriptionRTB;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTooltipData(const FCustomizationTooltipViewData& customizationViewData);

protected:
	UFUNCTION(BlueprintCallable)
	void SetStatusText(const bool isEquipped, const bool isOwned, const bool isLocked);

public:
	UFUNCTION(BlueprintCallable)
	void AppendToDescriptionText(const FText& appendedText);

public:
	UCustomizationTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationTooltipWidget) { return 0; }
