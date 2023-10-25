#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "EventEntryPresenter.generated.h"

class UUserWidget;
class UEventEntryStoreSubPresenter;
class UEventEntryEventSubPresenter;
class USubPresenter;
class UEventEntryCollectionSubPresenter;
class UEventEntryDetailsSubPresenter;
class UEventEntryViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UEventEntryPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> EventEntryWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UEventEntryEventSubPresenter* _eventSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UEventEntryDetailsSubPresenter* _detailsSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UEventEntryCollectionSubPresenter* _collectionSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UEventEntryStoreSubPresenter* _storeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USubPresenter* _activeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UEventEntryViewData* _viewData;

private:
	UFUNCTION(BlueprintCallable)
	void OnSelectedTabChanged(const int32 key);

	UFUNCTION(BlueprintCallable)
	void OnMilestoneTrackerItemClicked(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

	UFUNCTION(BlueprintCallable)
	void GoToStoreButtonClicked(const FName selectedStoreTabItemId);

public:
	UEventEntryPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryPresenter) { return 0; }
