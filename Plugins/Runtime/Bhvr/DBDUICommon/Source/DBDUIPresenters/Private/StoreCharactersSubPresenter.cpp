#include "StoreCharactersSubPresenter.h"
#include "StoreCharactersFiltersData.h"
#include "ECustomizationCategory.h"

void UStoreCharactersSubPresenter::OnDisplayStandPawnLoaded(int32 characterIndex)
{

}

void UStoreCharactersSubPresenter::OnCustomizationsFiltersChanged(FStoreCharactersFiltersData customizationsFilterData)
{

}

void UStoreCharactersSubPresenter::OnCustomizationSelected(FName customizationId, bool isSelected)
{

}

void UStoreCharactersSubPresenter::OnCustomizationsClearFiltersClicked()
{

}

void UStoreCharactersSubPresenter::OnCharactersFiltersChanged(FStoreCharactersFiltersData charactersFilterData)
{

}

void UStoreCharactersSubPresenter::OnCharacterSelected(int32 characterIndex)
{

}

void UStoreCharactersSubPresenter::OnCharactersClearFiltersClicked()
{

}

void UStoreCharactersSubPresenter::OnCategorySelected(ECustomizationCategory category)
{

}

UStoreCharactersSubPresenter::UStoreCharactersSubPresenter()
{
	this->StoreCharactersWidgetClass = NULL;
	this->DisplayStandName = NAME_None;
	this->CameraTransitionDurationSeconds = 0.000000;
	this->_availableCharacters = TArray<UStoreCharacterItemViewData*>();
	this->_selectedCharacter = NULL;
	this->_availableCustomizations = TArray<UStoreCustomizationItemViewData*>();
	this->_filteredCustomizations = TArray<UStoreCustomizationItemViewData*>();
	this->_availableCategories = TArray<FStoreCategoryViewData>();
}
