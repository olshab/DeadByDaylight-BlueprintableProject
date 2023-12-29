#include "StoreCollectionsSubPresenter.h"

UStoreCollectionsSubPresenter::UStoreCollectionsSubPresenter()
{
	this->_specialCollectionsViewData = TArray<UStoreCollectionViewData*>();
	this->_featuredCollectionsViewData = TArray<UStoreCollectionViewData*>();
	this->_allCollectionsViewData = TArray<UStoreCollectionViewData*>();
}
