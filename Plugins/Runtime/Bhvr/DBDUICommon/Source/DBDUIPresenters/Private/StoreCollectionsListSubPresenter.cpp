#include "StoreCollectionsListSubPresenter.h"

class UStoreCollectionViewData;

void UStoreCollectionsListSubPresenter::UpdateCollectionsBySearch(const FString& searchString)
{

}

void UStoreCollectionsListSubPresenter::OnCollectionClicked(const UStoreCollectionViewData* collection)
{

}

UStoreCollectionsListSubPresenter::UStoreCollectionsListSubPresenter()
{
	this->_combinedListsCollectionsViewData = TArray<UStoreCollectionViewData*>();
	this->_featuredCollectionsViewData = TArray<UStoreCollectionViewData*>();
	this->_allCollectionsViewData = TArray<UStoreCollectionViewData*>();
}
