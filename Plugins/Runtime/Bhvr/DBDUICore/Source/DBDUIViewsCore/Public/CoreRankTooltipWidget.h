#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "RankTooltipViewData.h"
#include "CoreRankTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreRankTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* RankNameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* ProgressTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* InfoTB;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTooltipData(const FRankTooltipViewData& viewData);

public:
	UCoreRankTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreRankTooltipWidget) { return 0; }
