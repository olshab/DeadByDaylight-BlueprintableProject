#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "StoreCollectionsSubPresenter.generated.h"

class UStoreCollectionsListSubPresenter;
class USubPresenter;
class UStoreCollectionsCustomizationsSubPresenter;
class UStoreCollectionViewData;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreCollectionsSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreCollectionsListSubPresenter* _collectionsListSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreCollectionsCustomizationsSubPresenter* _collectionsCustomizationsSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreSubPresenter* _activeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreSubPresenter* _previousActiveSubPresenter;

private:
	UFUNCTION(BlueprintCallable)
	void OnStopSubPresenterAsyncOperation(USubPresenter* subPresenter);

	UFUNCTION(BlueprintCallable)
	void OnStartSubPresenterAsyncOperation(USubPresenter* subPresenter);

	UFUNCTION(BlueprintCallable)
	void OnCollectionClicked(const UStoreCollectionViewData* collection);

	UFUNCTION(BlueprintCallable)
	void OnBackActionLabelChangeRequested(const FText& text);

	UFUNCTION(BlueprintCallable)
	void HandleSubPresenterError();

public:
	UStoreCollectionsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCollectionsSubPresenter) { return 0; }
