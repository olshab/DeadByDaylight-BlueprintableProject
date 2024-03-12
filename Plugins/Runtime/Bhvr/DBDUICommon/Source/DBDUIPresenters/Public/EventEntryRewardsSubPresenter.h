#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "EventEntryRewardsSubPresenter.generated.h"

class UEventEntryPresenter;
class IEventCollectionViewInterface;
class UStoreCustomizationItemViewData;

UCLASS(Blueprintable)
class UEventEntryRewardsSubPresenter : public USubPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TScriptInterface<IEventCollectionViewInterface> _tabWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> _rewardsGridData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> _previewAreaRewardsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
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
