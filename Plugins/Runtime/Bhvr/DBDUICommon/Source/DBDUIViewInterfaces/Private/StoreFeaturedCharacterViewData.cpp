#include "StoreFeaturedCharacterViewData.h"

FStoreFeaturedCharacterViewData::FStoreFeaturedCharacterViewData()
{
	this->CharacterIndex = 0;
	this->PlayerRole = EPlayerRole::VE_None;
	this->CharacterPortrait = NULL;
	this->CharacterName = FText::GetEmpty();
}
