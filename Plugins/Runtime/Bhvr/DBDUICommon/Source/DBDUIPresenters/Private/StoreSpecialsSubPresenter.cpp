#include "StoreSpecialsSubPresenter.h"
#include "StoreRedirectionData.h"
#include "PremiumPurchaseCompleteData.h"

void UStoreSpecialsSubPresenter::RequestMoveToCharactersPage(const FStoreRedirectionData& storeRedirectionData)
{

}

void UStoreSpecialsSubPresenter::OnPremiumTransactionCompleted(bool success, FName itemId, const FPremiumPurchaseCompleteData& purchaseCompleteData)
{

}

void UStoreSpecialsSubPresenter::OnAuricCellSpecialBuyAction(FName bundleId)
{

}

void UStoreSpecialsSubPresenter::OnArchivePassBannerClicked(const FName& archiveId)
{

}

UStoreSpecialsSubPresenter::UStoreSpecialsSubPresenter()
{
	this->_storeSpecialsWidget = NULL;
	this->_cachedSpecialsItems = TArray<UStoreCustomizationItemViewData*>();
}
