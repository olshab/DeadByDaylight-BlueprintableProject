#include "StoreCharactersFiltersData.h"

FStoreCharactersFiltersData::FStoreCharactersFiltersData()
{
	this->IsAvailable = false;
	this->IsOwned = false;
	this->_rarityFiltersMap = TMap<EItemRarity, bool>();
}
