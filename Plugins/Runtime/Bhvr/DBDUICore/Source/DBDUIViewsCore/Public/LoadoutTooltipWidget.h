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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TooltipTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* ToolTipDescriptionRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* SpecialEventTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* SpecialEventDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* UnlockInstructionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* RarityTypeSubtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* RarityBG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* Line_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* LevelIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
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
