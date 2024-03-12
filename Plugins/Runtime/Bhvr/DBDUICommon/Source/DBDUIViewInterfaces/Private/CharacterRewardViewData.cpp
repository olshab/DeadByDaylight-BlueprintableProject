#include "CharacterRewardViewData.h"

FCharacterRewardViewData::FCharacterRewardViewData()
{
	this->ItemId = NAME_None;
	this->IsOwned = false;
	this->TooltipData = FCharacterTooltipViewData{};
	this->IsEnabled = false;
}
