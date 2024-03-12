#include "MysteryBoxStatus.h"

FMysteryBoxStatus::FMysteryBoxStatus()
{
	this->Campaign = TEXT("");
	this->CanClaimCurrentBox = false;
	this->NextClaimTime = FDateTime{};
	this->NextClaimTime_IsSet = false;
	this->LastClaimTime = FDateTime{};
	this->LastClaimTime_IsSet = false;
	this->LastReward = TArray<FMysteryBoxClaimedReward>();
	this->LastReward_IsSet = false;
}
