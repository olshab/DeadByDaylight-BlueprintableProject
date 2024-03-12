#include "CoreStoreCollectionsListWidget.h"

class UStoreCollectionViewData;

void UCoreStoreCollectionsListWidget::UpdateTitleFromScroll(float currentOffset)
{

}

void UCoreStoreCollectionsListWidget::OnCollectionItemClicked(const UStoreCollectionViewData* collectionViewData)
{

}

UCoreStoreCollectionsListWidget::UCoreStoreCollectionsListWidget()
{
	this->TitleTB = NULL;
	this->CollectionsNotFoundTB = NULL;
	this->SearchBar = NULL;
	this->ScrollBox = NULL;
	this->FeaturedUniformGrid = NULL;
	this->AllUniformGrid = NULL;
	this->FeaturedContainer = NULL;
	this->_collectionItemClass = NULL;
	this->_featuredItemsColumnCount = 5;
	this->_allItemsColumnCount = 7;
	this->_preConstructedFeaturedItemsCount = 5;
	this->_preConstructedAllItemsCount = 20;
	this->_featuredListHiddenThreshold = 0.820000;
	this->_featuredItemsList = NULL;
	this->_allItemsList = NULL;
}
