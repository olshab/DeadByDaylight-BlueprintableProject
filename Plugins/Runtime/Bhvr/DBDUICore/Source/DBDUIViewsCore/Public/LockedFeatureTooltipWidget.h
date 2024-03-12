#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "ELockedElementType.h"
#include "Layout/Margin.h"
#include "LockedFeatureTooltipViewData.h"
#include "LockedFeatureTooltipWidget.generated.h"

class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API ULockedFeatureTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ELockedElementType, FMargin> _tooltipMargins;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* ContentTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* ProgressTB;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTooltipData(const FLockedFeatureTooltipViewData& viewData);

public:
	ULockedFeatureTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULockedFeatureTooltipWidget) { return 0; }
