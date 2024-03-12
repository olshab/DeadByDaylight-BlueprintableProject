#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "ArchiveRewardNodeTooltipWidget.generated.h"

class UCustomizationTooltipWidget;
class UCurrencyProgressionTooltipWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UArchiveRewardNodeTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCustomizationTooltipWidget* CustomizationTooltip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCurrencyProgressionTooltipWidget* CurrencyProgressionTooltip;

public:
	UArchiveRewardNodeTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveRewardNodeTooltipWidget) { return 0; }
