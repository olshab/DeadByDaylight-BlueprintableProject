#include "EventEntryRewardsSubPresenter.h"

void UEventEntryRewardsSubPresenter::OnRewardGridItemClicked(const int32 selectedIndex)
{

}

void UEventEntryRewardsSubPresenter::OnPreviewAreaItemClicked(const int32 selectedIndex)
{

}

void UEventEntryRewardsSubPresenter::OnInstructionButtonClicked()
{

}

UEventEntryRewardsSubPresenter::UEventEntryRewardsSubPresenter()
{
	this->_tabWidget = NULL;
	this->_rewardsGridData = TArray<FCustomizationRewardViewData>();
	this->_previewAreaRewardsData = TArray<FCustomizationRewardViewData>();
	this->_parentPresenter = NULL;
}
