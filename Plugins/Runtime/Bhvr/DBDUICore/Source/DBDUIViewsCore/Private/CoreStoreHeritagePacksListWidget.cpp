#include "CoreStoreHeritagePacksListWidget.h"

void UCoreStoreHeritagePacksListWidget::OnPackSeen(const FString& packId)
{

}

void UCoreStoreHeritagePacksListWidget::OnPackBuyButtonClicked(const FString& packId)
{

}

UCoreStoreHeritagePacksListWidget::UCoreStoreHeritagePacksListWidget()
{
	this->_preConstructedItemsCount = 3;
	this->_itemWidgetClass = NULL;
	this->Content = NULL;
	this->Scroll = NULL;
	this->_numOfColumns = 3;
	this->_itemList = NULL;
}
