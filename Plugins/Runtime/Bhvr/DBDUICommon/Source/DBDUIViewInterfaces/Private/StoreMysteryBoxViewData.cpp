#include "StoreMysteryBoxViewData.h"

FStoreMysteryBoxViewData::FStoreMysteryBoxViewData()
{
	this->CanClaimCurrentBox = false;
	this->HasNextBoxToClaim = false;
	this->NextAvailableAtTime = FDateTime{};
	this->HasPreviousClaimedBox = false;
	this->PreviousClaimTime = FDateTime{};
	this->Reward = NULL;
}
