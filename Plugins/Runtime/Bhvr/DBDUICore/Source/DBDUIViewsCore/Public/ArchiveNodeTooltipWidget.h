#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "EArchiveNodeType.h"
#include "Templates/SubclassOf.h"
#include "ArchiveNodeViewData.h"
#include "ArchiveNodeTooltipWidget.generated.h"

class UDBDImage;
class UVerticalBox;
class UCoreArchiveObjectiveWidget;
class UDBDTextBlock;
class UDBDRichTextBlock;
class UCoreCurrencyForTooltipsWidget;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UArchiveNodeTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* BackgroundIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* RarityIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* NodeTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* SubtitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* NodeDescriptionRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreArchiveObjectiveWidget> ObjectiveWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreCurrencyForTooltipsWidget> RewardWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* ArchiveObjectivesContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* RewardsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* VignetteRTB;

public:
	UFUNCTION(BlueprintCallable)
	void SetTooltipData(const FArchiveNodeViewData& nodeViewData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetNodeType(EArchiveNodeType type);

	UFUNCTION(BlueprintCallable)
	void Reset();

public:
	UArchiveNodeTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveNodeTooltipWidget) { return 0; }
