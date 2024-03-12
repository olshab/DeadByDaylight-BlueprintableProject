#include "StoreCollectionsCustomizationsSubPresenter.h"
#include "ESortingOption.h"
#include "ESortingOrder.h"
#include "StoreCharactersFiltersData.h"
#include "ECurrencyType.h"

void UStoreCollectionsCustomizationsSubPresenter::UpdateDisplayingCustomizations()
{

}

void UStoreCollectionsCustomizationsSubPresenter::OnSortingChanged(const ESortingOption sortingType, const ESortingOrder sortingOrder)
{

}

void UStoreCollectionsCustomizationsSubPresenter::OnSearchBarTextChanged(const FString& searchString)
{

}

void UStoreCollectionsCustomizationsSubPresenter::OnFiltersChanged(const FStoreCharactersFiltersData& storeFiltersData)
{

}

void UStoreCollectionsCustomizationsSubPresenter::OnCustomizationUnlockClicked(ECurrencyType currencyType)
{

}

void UStoreCollectionsCustomizationsSubPresenter::OnCustomizationSelected(const FName customizationId, const bool isSelected)
{

}

void UStoreCollectionsCustomizationsSubPresenter::OnCustomizationEquipClicked()
{

}

void UStoreCollectionsCustomizationsSubPresenter::OnClearFiltersClicked()
{

}

UStoreCollectionsCustomizationsSubPresenter::UStoreCollectionsCustomizationsSubPresenter()
{
	this->_currentCollection = NULL;
	this->_currentCustomization = NULL;
	this->_collectionCustomizations = TArray<UStoreCustomizationItemViewData*>();
	this->_displayingCustomizations = TArray<UStoreCustomizationItemViewData*>();
}
