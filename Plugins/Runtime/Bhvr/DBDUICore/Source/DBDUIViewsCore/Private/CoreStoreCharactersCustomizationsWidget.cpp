#include "CoreStoreCharactersCustomizationsWidget.h"

class UCoreSelectableButtonWidget;

void UCoreStoreCharactersCustomizationsWidget::OnPresetSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

void UCoreStoreCharactersCustomizationsWidget::OnEmptyItemSelectedAgain(UCoreSelectableButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersCustomizationsWidget::OnEmptyItemSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

void UCoreStoreCharactersCustomizationsWidget::OnCustomizationSelectedAgain(UCoreSelectableButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersCustomizationsWidget::OnCustomizationSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

void UCoreStoreCharactersCustomizationsWidget::OnCharmSlotSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

void UCoreStoreCharactersCustomizationsWidget::OnCategorySelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

UCoreStoreCharactersCustomizationsWidget::UCoreStoreCharactersCustomizationsWidget()
{
	this->_customizationItemWidgetClass = NULL;
	this->_categoryItemWidgetClass = NULL;
	this->_charmSlotItemWidgetClass = NULL;
	this->_presetItemWidgetClass = NULL;
	this->_numberOfColumns = 1;
	this->_customizationItemScale = 1.000000;
	this->_layoutMask = 0;
	this->CustomizationsScroll = NULL;
	this->CustomizationsContainer = NULL;
	this->CategoriesContainer = NULL;
	this->CharmSlotsContainer = NULL;
	this->PresetsContainer = NULL;
	this->EmptyItem = NULL;
	this->FiltersWidget = NULL;
	this->SearchBar = NULL;
	this->_allCustomizationItems = TArray<UCoreStoreCustomizationItemWidget*>();
	this->_selectedCustomizationItem = NULL;
	this->_selectedCategoryItem = NULL;
	this->_selectedCharmSlotItem = NULL;
	this->_selectedPresetItem = NULL;
	this->_preConstructedCategoriesCount = 5;
	this->_preConstructedCustomizationsCount = 30;
	this->_preConstructedCharmSlotsCount = 3;
	this->_preConstructedPresetsCount = 3;
	this->_categoryList = NULL;
	this->_customizationList = NULL;
	this->_charmSlotList = NULL;
	this->_presetList = NULL;
}
