#pragma once

#include "CoreMinimal.h"
#include "MilestoneTrackerEventBasedSkinViewData.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "MilestoneTrackerViewData.h"
#include "MilestoneTrackerWidget.generated.h"

class UDBDRichTextBlock;
class UMilestoneTrackerTierItem;
class UHorizontalBox;
class UCoreButtonWidget;
class UDBDImage;
class UEventPointsWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMilestoneTrackerWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* MilestonePointsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UEventPointsWidget* UserMilestonePointsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* RewardsGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* Background;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UMilestoneTrackerTierItem> _milestoneTrackerTierItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _maxTierItems;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UMilestoneTrackerTierItem*> _tierItemPool;

public:
	UFUNCTION(BlueprintCallable)
	void SetVisuals(const FMilestoneTrackerEventBasedSkinViewData& viewData);

	UFUNCTION(BlueprintCallable)
	void SetData(const FMilestoneTrackerViewData& viewData);

	UFUNCTION(BlueprintCallable)
	void SelectMilestoneTrackerItem(FName itemId);

private:
	UFUNCTION(BlueprintCallable)
	void OnRewardItemClicked(UCoreButtonWidget* buttonTarget);

public:
	UFUNCTION(BlueprintCallable)
	void DeselectMilestoneRewards();

public:
	UMilestoneTrackerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UMilestoneTrackerWidget) { return 0; }
