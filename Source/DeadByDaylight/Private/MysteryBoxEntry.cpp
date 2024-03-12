#include "MysteryBoxEntry.h"

FMysteryBoxEntry::FMysteryBoxEntry()
{
	this->Campaign = TEXT("");
	this->ActiveFromDate = FDateTime{};
	this->ActiveToDate = FDateTime{};
	this->PossibleRewards = TArray<FMysteryBoxReward>();
}
