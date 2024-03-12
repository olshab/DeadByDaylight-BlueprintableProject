#include "StoreCharactersCustomizationsViewData.h"

FStoreCharactersCustomizationsViewData::FStoreCharactersCustomizationsViewData()
{
	this->Customizations = TArray<UStoreCustomizationItemViewData*>();
	this->SelectedCustomizationIds = TArray<FName>();
	this->EquippedCustomizationIds = TArray<FName>();
	this->SelectedSlotIndex = 0;
	this->Categories = TArray<FStoreCategoryViewData>();
	this->SelectedCategory = ECustomizationCategory::None;
	this->PresetIds = TArray<int32>();
	this->SelectedPresetId = 0;
}
