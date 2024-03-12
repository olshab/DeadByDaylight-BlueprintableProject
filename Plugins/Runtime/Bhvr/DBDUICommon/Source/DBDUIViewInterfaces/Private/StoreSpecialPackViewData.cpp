#include "StoreSpecialPackViewData.h"

bool UStoreSpecialPackViewData::ContainsArchivePassFragments() const
{
	return false;
}

bool UStoreSpecialPackViewData::ContainsArchivePass() const
{
	return false;
}

UStoreSpecialPackViewData::UStoreSpecialPackViewData()
{
	this->Id = TEXT("");
	this->DisplayTitle = TEXT("");
	this->CharactersData = TArray<UStoreCharacterItemViewData*>();
	this->CustomizationsData = TArray<UStoreCustomizationItemViewData*>();
	this->SortOrder = 0;
	this->IsNew = false;
	this->IsOwned = false;
}
