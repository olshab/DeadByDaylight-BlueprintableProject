#include "CoreStoreSpecialsWidget.h"

class UCoreButtonWidget;

void UCoreStoreSpecialsWidget::OnSpecialItemClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreSpecialsWidget::OnArchivePassBannerClicked(UCoreButtonWidget* buttonTarget)
{

}

UCoreStoreSpecialsWidget::UCoreStoreSpecialsWidget()
{
	this->_itemWidgetClass = NULL;
	this->_layoutMask = 0;
	this->_highlightPreConstructedItemsCount = 0;
	this->_highlightItemsScale = 1.000000;
	this->_regularPreConstructedItemsCount = 0;
	this->_regularItemsScale = 1.000000;
	this->AuricCellSpecialOffer = NULL;
	this->NoAuricCellsTitleTB = NULL;
	this->NoAuricCellsTextTB = NULL;
	this->HighlightSectionTitleTB = NULL;
	this->ArchivePassBannerContainer = NULL;
	this->ArchivePassBanner = NULL;
	this->HighlightSectionContainer = NULL;
	this->RegularSectionTitleTB = NULL;
	this->RegularSectionContainer = NULL;
	this->_highlightItemList = NULL;
	this->_regularItemList = NULL;
}
