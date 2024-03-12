#include "MysteryBoxClaimedReward.h"

FMysteryBoxClaimedReward::FMysteryBoxClaimedReward()
{
	this->Type = ERewardType::None;
	this->Currency = ECurrencyType::None;
	this->Currency_IsSet = false;
	this->Progression = EProgressionType::None;
	this->Progression_IsSet = false;
	this->Amount = 0;
	this->Amount_IsSet = false;
}
