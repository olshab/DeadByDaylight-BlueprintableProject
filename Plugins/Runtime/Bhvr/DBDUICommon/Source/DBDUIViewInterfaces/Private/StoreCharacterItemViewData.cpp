#include "StoreCharacterItemViewData.h"

UStoreCharacterItemViewData::UStoreCharacterItemViewData()
{
	this->CharacterIndex = -1;
	this->DisplayName = FText::GetEmpty();
	this->Biography = FText::GetEmpty();
	this->BackgroundImagePath = NAME_None;
	this->PlayerRole = EPlayerRole::VE_None;
	this->Difficulty = ECharacterDifficulty::VE_None;
	this->KillerPowerId = NAME_None;
	this->IsEquipped = false;
	this->HasNonSelectedPerks = false;
	this->IsDlcLockedKiller = false;
	this->IsLegacyRewardPrestigeEnabled = false;
	this->NewItemsCount = 0;
}
