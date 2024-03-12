#include "CoreStoreCollectionsItemWidget.h"
#include "ECollectionItemScaleType.h"

class UStoreCollectionViewData;

void UCoreStoreCollectionsItemWidget::SetData(UStoreCollectionViewData* collectionViewData, const ECollectionItemScaleType collectionItemScale)
{

}

void UCoreStoreCollectionsItemWidget::OnBannerButtonClicked()
{

}

UCoreStoreCollectionsItemWidget::UCoreStoreCollectionsItemWidget()
{
	this->CountTB = NULL;
	this->BannerButton = NULL;
	this->_collectionViewData = NULL;
}
