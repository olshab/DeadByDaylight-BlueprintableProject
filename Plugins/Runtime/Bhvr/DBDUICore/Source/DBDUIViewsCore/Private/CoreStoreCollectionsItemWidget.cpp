#include "CoreStoreCollectionsItemWidget.h"

class UStoreCollectionViewData;

void UCoreStoreCollectionsItemWidget::SetupView_Implementation(UStoreCollectionViewData* collectionViewData)
{

}

UCoreStoreCollectionsItemWidget::UCoreStoreCollectionsItemWidget()
{
	this->TimerText = NULL;
	this->CountText = NULL;
	this->StoreCustomizationListBox = NULL;
	this->_storeCustomizationItemWidgetClass = NULL;
	this->_preConstructedItemsCount = 10;
	this->_layoutMask = 0;
	this->_itemList = NULL;
}
