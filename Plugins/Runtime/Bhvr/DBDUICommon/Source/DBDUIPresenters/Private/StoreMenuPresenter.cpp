#include "StoreMenuPresenter.h"
#include "EStoreMenuState.h"

class USubPresenter;

void UStoreMenuPresenter::OpenRedeemCodePopup()
{

}

void UStoreMenuPresenter::OpenAuricCellsOverlay()
{

}

void UStoreMenuPresenter::OnStopSubPresenterAsyncOperation(USubPresenter* subPresenter)
{

}

void UStoreMenuPresenter::OnStartSubPresenterAsyncOperation(USubPresenter* subPresenter)
{

}

void UStoreMenuPresenter::OnMoveToCharactersPageRequested(int32 characterIndex)
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
	this->_storeSpecialsSubPresenter = NULL;
	this->_storeCollectionsSubPresenter = NULL;
	this->_storeSpecialPacksSubPresenter = NULL;
	this->_storeCharactersSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
	this->_shopManager = NULL;
}
