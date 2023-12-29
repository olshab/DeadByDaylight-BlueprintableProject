#include "CoreStoreCollectionsListWidget.h"

UCoreStoreCollectionsListWidget::UCoreStoreCollectionsListWidget()
{
	this->CollectionItemListBox = NULL;
	this->_collectionItemClass = NULL;
	this->_preConstructedItemsCount = 10;
	this->_itemList = NULL;
}
