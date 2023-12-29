#include "CoreStoreChapterPacksListWidget.h"

void UCoreStoreChapterPacksListWidget::OnItemBuyActionClicked(const FString& packId)
{

}

UCoreStoreChapterPacksListWidget::UCoreStoreChapterPacksListWidget()
{
	this->_preConstructedItemsCount = 5;
	this->_itemWidgetClass = NULL;
	this->Content = NULL;
	this->_itemList = NULL;
}
