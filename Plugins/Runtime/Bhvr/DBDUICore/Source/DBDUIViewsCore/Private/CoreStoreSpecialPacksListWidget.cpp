#include "CoreStoreSpecialPacksListWidget.h"

void UCoreStoreSpecialPacksListWidget::OnItemClicked(const FString& packId)
{

}

UCoreStoreSpecialPacksListWidget::UCoreStoreSpecialPacksListWidget()
{
	this->_preConstructedItemsCount = 5;
	this->_numOfColumns = 3;
	this->_itemWidgetClass = NULL;
	this->ContentGrid = NULL;
	this->Scroll = NULL;
	this->_itemList = NULL;
}
