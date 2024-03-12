#include "EventObjectiveTrackerViewData.h"

FEventObjectiveTrackerViewData::FEventObjectiveTrackerViewData()
{
	this->GlobalProgression = 0;
	this->MaxProgression = 0;
	this->NextProgression = 0;
	this->GlobalBonus = 0.0f;
	this->IndexOfLastTargetReached = 0;
	this->BonusTargetsData = TArray<FEventObjectiveTargetData>();
	this->CommunityChallengeData = FSpecialEventCommunityChallengeData{};
	this->BannerMaterial = NULL;
	this->LabelTexture = NULL;
}
