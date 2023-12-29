#include "StoreSpecialsSubPresenter.h"

void UStoreSpecialsSubPresenter::OnPremiumTransactionCompleted(bool success)
{

}

void UStoreSpecialsSubPresenter::OnAuricCellSpecialOtherOptions()
{

}

void UStoreSpecialsSubPresenter::OnAuricCellSpecialBuyAction(FName bundleId)
{

}

UStoreSpecialsSubPresenter::UStoreSpecialsSubPresenter()
{
	this->_storeSpecialsWidget = NULL;
	this->_cachedSpecialsItems = TArray<UStoreSpecialsItemViewData*>();
}
