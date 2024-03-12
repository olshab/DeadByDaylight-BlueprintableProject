#include "CoreStoreFeaturedMysteryBoxWidget.h"
#include "StoreMysteryBoxViewData.h"

class UCoreButtonWidget;

void UCoreStoreFeaturedMysteryBoxWidget::SetData_Implementation(const FStoreMysteryBoxViewData& viewData)
{

}

void UCoreStoreFeaturedMysteryBoxWidget::PresentClaimResult_Implementation(bool succeeded, const FStoreMysteryBoxViewData& viewData)
{

}

void UCoreStoreFeaturedMysteryBoxWidget::OnClaimButtonClicked(UCoreButtonWidget* buttonTarget)
{

}

FStoreMysteryBoxViewData UCoreStoreFeaturedMysteryBoxWidget::GetMysteryBoxViewData() const
{
	return FStoreMysteryBoxViewData{};
}

UCoreStoreFeaturedMysteryBoxWidget::UCoreStoreFeaturedMysteryBoxWidget()
{
	this->ClaimButton = NULL;
	this->RewardAmountText = NULL;
	this->LastRewardText = NULL;
	this->LastRewardAmountText = NULL;
	this->LastRewardIconImage = NULL;
}
