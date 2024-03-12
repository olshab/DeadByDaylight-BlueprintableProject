#include "StoreCollectionsSubPresenter.h"

class USubPresenter;
class UStoreCollectionViewData;

void UStoreCollectionsSubPresenter::OnStopSubPresenterAsyncOperation(USubPresenter* subPresenter)
{

}

void UStoreCollectionsSubPresenter::OnStartSubPresenterAsyncOperation(USubPresenter* subPresenter)
{

}

void UStoreCollectionsSubPresenter::OnCollectionClicked(const UStoreCollectionViewData* collection)
{

}

void UStoreCollectionsSubPresenter::OnBackActionLabelChangeRequested(const FText& text)
{

}

void UStoreCollectionsSubPresenter::HandleSubPresenterError()
{

}

UStoreCollectionsSubPresenter::UStoreCollectionsSubPresenter()
{
	this->_collectionsListSubPresenter = NULL;
	this->_collectionsCustomizationsSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
	this->_previousActiveSubPresenter = NULL;
}
