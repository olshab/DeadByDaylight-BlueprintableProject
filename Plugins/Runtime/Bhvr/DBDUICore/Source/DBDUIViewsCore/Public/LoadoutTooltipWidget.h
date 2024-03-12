#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "LoadoutTooltipData.h"
#include "LoadoutTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;
class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API ULoadoutTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TooltipTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ToolTipDescriptionRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* SpecialEventTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* SpecialEventDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* UnlockInstructionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* RarityTypeSubtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* RarityBG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* EventHeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* Line_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* LevelIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ToolTipWarning;

public:
	UFUNCTION(BlueprintCallable)
	void SetTooltipData(const FLoadoutTooltipData& tooltipViewData);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetLoadoutTooltipPerkLevel(int32 level);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetLoadoutTooltipLockedState();

public:
	UFUNCTION(BlueprintCallable)
	void Reset();

public:
	ULoadoutTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutTooltipWidget) { return 0; }
