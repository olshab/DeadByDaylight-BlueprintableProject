#include "RewardPopupViewData.h"

URewardPopupViewData::URewardPopupViewData()
{
	this->BundleId = NAME_None;
	this->Rewards = TArray<UGrantedRewardPopupViewData*>();
}
