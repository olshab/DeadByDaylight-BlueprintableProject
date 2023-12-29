#include "CoreStoreSpecialPacksListWidget.h"

void UCoreStoreSpecialPacksListWidget::OnItemBuyActionClicked(const FString& packId)
{

}

UCoreStoreSpecialPacksListWidget::UCoreStoreSpecialPacksListWidget()
{
	this->_preConstructedItemsCount = 5;
	this->_itemWidgetClass = NULL;
	this->Content = NULL;
	this->_itemList = NULL;
}
