#include "StoreMenuPresenter.h"
#include "EStoreMenuState.h"
#include "ECurrencyType.h"

class USubPresenter;

void UStoreMenuPresenter::ShowArchivePassPopup(const FName& archiveId)
{

}

void UStoreMenuPresenter::ResetBackActionLabel() const
{

}

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

void UStoreMenuPresenter::OnNotEnoughCurrencyModalButtonClicked(const ECurrencyType currencyType)
{

}

void UStoreMenuPresenter::OnMenuTabSelected(EStoreMenuState menuState)
{

}

void UStoreMenuPresenter::OnBackActionLabelChangeRequested(const FText& newLabel) const
{

}

void UStoreMenuPresenter::OnBackAction()
{

}

void UStoreMenuPresenter::OnAsyncLoadSuccess()
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
	this->_storeKillersSubPresenter = NULL;
	this->_storeSurvivorsSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
	this->_shopManager = NULL;
	this->_matchmakingMonitor = NULL;
}
