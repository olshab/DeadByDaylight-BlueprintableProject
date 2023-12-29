#include "StoreChapterPackViewData.h"

UStoreChapterPackViewData::UStoreChapterPackViewData()
{
	this->Id = TEXT("");
	this->DisplayTitle = FText::GetEmpty();
	this->PackImage = NULL;
	this->CharactersData = TArray<UStoreCharacterItemViewData*>();
	this->CustomizationsData = TArray<UStoreCustomizationItemViewData*>();
	this->SortOrder = 0;
	this->IsNew = false;
	this->IsOwned = false;
}
