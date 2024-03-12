#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "MilestoneTrackerItemViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "EMilestoneTrackerItemState.h"
#include "MilestoneTrackerTierItem.generated.h"

class UMaterialInstance;
class UCoreStoreCustomizationItemWidget;
class UDBDImage;
class UEventPointsWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMilestoneTrackerTierItem : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreCustomizationItemWidget* Reward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UEventPointsWidget* EventPointsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* BackgroundImage;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateBackground(const TSoftObjectPtr<UMaterialInstance> background);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualState(const EMilestoneTrackerItemState state);

	UFUNCTION(BlueprintCallable)
	void SetData(const FMilestoneTrackerItemViewData& data);

	UFUNCTION(BlueprintCallable)
	void OnBackgroundImageLoadingStarted();

	UFUNCTION(BlueprintCallable)
	void OnBackgroundImageLoadingCompleted();

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void Clear() const;

public:
	UMilestoneTrackerTierItem();
};

FORCEINLINE uint32 GetTypeHash(const UMilestoneTrackerTierItem) { return 0; }
