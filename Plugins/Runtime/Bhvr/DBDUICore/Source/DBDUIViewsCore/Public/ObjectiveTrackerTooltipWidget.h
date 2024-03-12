#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "Templates/SubclassOf.h"
#include "EventObjectiveTrackerViewData.h"
#include "ObjectiveTrackerTooltipWidget.generated.h"

class UDBDImage;
class UVerticalBox;
class UObjectiveRewardLabelWidget;
class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UObjectiveTrackerTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* SubtitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* DescriptionRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* RewardsHeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* RewardLabelContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* BannerIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* LabelIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UObjectiveRewardLabelWidget> ObjectiveRewardLabelWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxRewardLabels;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UObjectiveRewardLabelWidget*> _objectiveRewardWidgetPool;

public:
	UFUNCTION(BlueprintCallable)
	void SetTooltipData(const FEventObjectiveTrackerViewData& viewData);

public:
	UObjectiveTrackerTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UObjectiveTrackerTooltipWidget) { return 0; }
