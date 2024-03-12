#include "CoreStoreCharactersSelectionWidget.h"

class UCoreSelectableButtonWidget;
class UCoreButtonWidget;

void UCoreStoreCharactersSelectionWidget::OnPerkToastButtonClick(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersSelectionWidget::OnCharacterSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

UCoreStoreCharactersSelectionWidget::UCoreStoreCharactersSelectionWidget()
{
	this->_itemWidgetClass = NULL;
	this->_numberOfColumns = 1;
	this->_itemScale = 1.000000;
	this->_layoutMask = 0;
	this->_preConstructedItemsCount = 40;
	this->ScrollBox = NULL;
	this->Container = NULL;
	this->FiltersWidget = NULL;
	this->SearchBar = NULL;
	this->PerksToastButton = NULL;
	this->PerksToast = NULL;
	this->_allCharacterItems = TArray<UCoreStoreCharacterItemWidget*>();
	this->_selectedItem = NULL;
	this->_characterList = NULL;
}
