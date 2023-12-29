#include "StoreCharactersFiltersData.h"

FStoreCharactersFiltersData::FStoreCharactersFiltersData()
{
	this->IsFavorite = false;
	this->IsOwned = false;
	this->RarityFiltersMap = TMap<EItemRarity, bool>();
}
