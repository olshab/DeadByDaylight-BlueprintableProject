#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "CustomizationRewardViewData.h"
#include "EventEntryRewardsSubPresenter.generated.h"

class UEventEntryPresenter;
class IEventCollectionViewInterface;

UCLASS(Blueprintable)
class UEventEntryRewardsSubPresenter : public USubPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TScriptInterface<IEventCollectionViewInterface> _tabWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FCustomizationRewardViewData> _rewardsGridData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FCustomizationRewardViewData> _previewAreaRewardsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UEventEntryPresenter* _parentPresenter;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRewardGridItemClicked(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable)
	void OnPreviewAreaItemClicked(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable)
	void OnInstructionButtonClicked();

public:
	UEventEntryRewardsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryRewardsSubPresenter) { return 0; }
