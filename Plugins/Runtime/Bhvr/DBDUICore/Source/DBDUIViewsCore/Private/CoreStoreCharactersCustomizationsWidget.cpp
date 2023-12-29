#include "CoreStoreCharactersCustomizationsWidget.h"

class UCoreSelectableButtonWidget;

void UCoreStoreCharactersCustomizationsWidget::OnCustomizationSelectedAgain(UCoreSelectableButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersCustomizationsWidget::OnCustomizationSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

void UCoreStoreCharactersCustomizationsWidget::OnCategorySelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

UCoreStoreCharactersCustomizationsWidget::UCoreStoreCharactersCustomizationsWidget()
{
	this->_customizationItemWidgetClass = NULL;
	this->_categoryItemWidgetClass = NULL;
	this->_numberOfColumns = 1;
	this->_customizationItemScale = 1.000000;
	this->_layoutMask = 0;
	this->CustomizationsScroll = NULL;
	this->CustomizationsContainer = NULL;
	this->CategoriesContainer = NULL;
	this->FiltersWidget = NULL;
	this->_selectedCustomizationItems = TArray<UCoreStoreCustomizationItemWidget*>();
	this->_maxSelectedItems = 0;
	this->_selectedCategoryItem = NULL;
	this->_preConstructedCategoriesCount = 5;
	this->_preConstructedCustomizationsCount = 30;
	this->_categoryList = NULL;
	this->_customizationList = NULL;
}
