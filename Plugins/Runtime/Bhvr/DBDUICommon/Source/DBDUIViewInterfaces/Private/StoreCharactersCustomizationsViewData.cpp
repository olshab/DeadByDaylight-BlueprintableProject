#include "StoreCharactersCustomizationsViewData.h"

FStoreCharactersCustomizationsViewData::FStoreCharactersCustomizationsViewData()
{
	this->Customizations = TArray<UStoreCustomizationItemViewData*>();
	this->SelectedCustomizationIds = TArray<FName>();
	this->MaxSelectedCustomizations = 0;
	this->Categories = TArray<FStoreCategoryViewData>();
	this->SelectedCategory = ECustomizationCategory::None;
}
