#include "StoreFeaturedSubPresenter.h"

void UStoreFeaturedSubPresenter::OnBackendStoreDataReceived(bool success)
{

}

UStoreFeaturedSubPresenter::UStoreFeaturedSubPresenter()
{
	this->_storeFeaturedWidget = NULL;
	this->_cachedSpecialOfferItems = TArray<UStoreSpecialOfferItemViewData*>();
}
