#include "ObjectiveRewardLabelViewData.h"

FObjectiveRewardLabelViewData::FObjectiveRewardLabelViewData()
{
	this->TargetData = FEventObjectiveTargetData{};
	this->CurrencyRewardType = ECurrencyType::None;
	this->IsReached = false;
	this->IsActive = false;
}
