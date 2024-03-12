#include "AuricCellsPresenter.h"
#include "PremiumPurchaseCompleteData.h"

void UAuricCellsPresenter::OnPremiumTransactionCompleted(bool success, FName itemId, const FPremiumPurchaseCompleteData& purchaseCompleteData)
{

}

void UAuricCellsPresenter::OnBuyAction(FName bundleId)
{

}

void UAuricCellsPresenter::OnBackAction()
{

}

UAuricCellsPresenter::UAuricCellsPresenter()
{
	this->AuricCellsWidgetClass = NULL;
}
