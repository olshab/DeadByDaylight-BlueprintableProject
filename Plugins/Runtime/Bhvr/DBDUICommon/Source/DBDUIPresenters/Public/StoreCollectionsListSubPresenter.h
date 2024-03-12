#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "StoreCollectionsListSubPresenter.generated.h"

class UStoreCollectionViewData;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreCollectionsListSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCollectionViewData*> _combinedListsCollectionsViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCollectionViewData*> _featuredCollectionsViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCollectionViewData*> _allCollectionsViewData;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateCollectionsBySearch(const FString& searchString);

	UFUNCTION(BlueprintCallable)
	void OnCollectionClicked(const UStoreCollectionViewData* collection);

public:
	UStoreCollectionsListSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCollectionsListSubPresenter) { return 0; }
