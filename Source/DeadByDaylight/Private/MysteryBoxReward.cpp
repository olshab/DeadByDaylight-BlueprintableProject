#include "MysteryBoxReward.h"

FMysteryBoxReward::FMysteryBoxReward()
{
	this->Type = ERewardType::None;
	this->CurrencyType = ECurrencyType::None;
	this->ProgressionType = EProgressionType::None;
	this->Amount = 0;
	this->Weighting = 0;
}
