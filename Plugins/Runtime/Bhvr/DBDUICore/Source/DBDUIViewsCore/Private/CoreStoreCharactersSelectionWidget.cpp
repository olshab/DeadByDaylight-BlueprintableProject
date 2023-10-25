#include "CoreStoreCharactersSelectionWidget.h"

class UCoreSelectableButtonWidget;

void UCoreStoreCharactersSelectionWidget::OnCharacterSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

UCoreStoreCharactersSelectionWidget::UCoreStoreCharactersSelectionWidget()
{
	this->_tileWidgetClass = NULL;
	this->_numberOfColumns = 1;
	this->_tileScale = 1.000000;
	this->Scroll = NULL;
	this->Container = NULL;
	this->_tiles = TArray<UCoreStoreCharacterItemWidget*>();
	this->_selectedTile = NULL;
}
