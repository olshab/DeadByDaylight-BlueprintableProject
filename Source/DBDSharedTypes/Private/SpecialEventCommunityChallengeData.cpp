#include "SpecialEventCommunityChallengeData.h"

FSpecialEventCommunityChallengeData::FSpecialEventCommunityChallengeData()
{
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->CurrencyRewardType = ECurrencyType::None;
	this->ObjectiveIcon = NULL;
}
