#include "StoreMenuPresenter.h"
#include "EStoreMenuState.h"

void UStoreMenuPresenter::OpenRedeemCodePopup()
{

}

void UStoreMenuPresenter::OnMenuTabSelected(EStoreMenuState menuState, bool alreadySelected)
{

}

void UStoreMenuPresenter::OnBackAction()
{

}

void UStoreMenuPresenter::OnAllStoreDataLoadComplete(bool success)
{

}

UStoreMenuPresenter::UStoreMenuPresenter()
{
	this->StoreMenuWidgetClass = NULL;
	this->DisplayStandName = NAME_None;
	this->InStoreCameraTransitionDurationSeconds = 0.000000;
	this->_storeFeaturedSubPresenter = NULL;
	this->_storeCollectionsSubPresenter = NULL;
	this->_storeBundlesSubPresenter = NULL;
	this->_storeCharactersSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
	this->_shopManager = NULL;
}
