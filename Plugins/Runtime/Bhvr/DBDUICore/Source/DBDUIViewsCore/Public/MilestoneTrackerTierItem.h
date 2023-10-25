#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "EMilestoneTrackerItemState.h"
#include "MilestoneTrackerItemViewData.h"
#include "MilestoneTrackerTierItem.generated.h"

class UCoreCustomizationRewardWidget;
class UDBDImage;
class UEventPointsWidget;
class UMaterialInstance;

UCLASS(Blueprintable, EditInlineNew)
class UMilestoneTrackerTierItem : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreCustomizationRewardWidget* Reward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UEventPointsWidget* EventPointsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* BackgroundImage;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateBackground(const TSoftObjectPtr<UMaterialInstance> background);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualState(const EMilestoneTrackerItemState state);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetIsOwned(bool isOwned, bool useAnimation);

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
