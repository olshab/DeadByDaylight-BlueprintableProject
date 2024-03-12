#include "CoreStoreItemWidget.h"
#include "EFlagSize.h"
#include "EStoreItemLayout.h"

class UCoreSelectableButtonWidget;
class UStoreItemViewData;
class UCoreButtonWidget;
class UCorePriceTagWidget;
class UCoreTimerFlagWidget;

void UCoreStoreItemWidget::SetTimerFlagSize(EFlagSize flagSize)
{

}

void UCoreStoreItemWidget::SetStoreItemLayout(int32 layoutMask)
{

}

void UCoreStoreItemWidget::SetStoreItemData_Implementation(UStoreItemViewData* data)
{

}

void UCoreStoreItemWidget::SetScale(float scale)
{

}

void UCoreStoreItemWidget::OnButtonUnhovered(UCoreButtonWidget* targetButton)
{

}

void UCoreStoreItemWidget::OnButtonSelectedChanged(UCoreSelectableButtonWidget* targetButton, bool isSelected)
{

}

void UCoreStoreItemWidget::OnButtonHovered(UCoreButtonWidget* targetButton)
{

}

bool UCoreStoreItemWidget::IsTagVisible(EStoreItemLayout tag) const
{
	return false;
}

UCoreTimerFlagWidget* UCoreStoreItemWidget::CreateTimerFlagWidget()
{
	return NULL;
}

UCorePriceTagWidget* UCoreStoreItemWidget::CreatePriceTagWidget()
{
	return NULL;
}

void UCoreStoreItemWidget::ClearTimerFlagWidgets()
{

}

void UCoreStoreItemWidget::ClearPriceTagWidgets()
{

}

UCoreStoreItemWidget::UCoreStoreItemWidget()
{
	this->_layoutMask = 0;
	this->_priceTagWidgetClass = NULL;
	this->_timerFlagWidgetClass = NULL;
	this->_preConstructedPriceTagCount = 1;
	this->_preConstructedTimerFlagCount = 0;
	this->_tooltipHorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->_tooltipVerticalAlignment = ETooltipVerticalAlignment::Default;
	this->ItemIMG = NULL;
	this->LayoutScale = NULL;
	this->SelectedOverlay = NULL;
	this->OnHoverBorder = NULL;
	this->TimerFlagVerticalBox = NULL;
	this->PriceTagsVerticalBox = NULL;
	this->UnavailableTagTB = NULL;
	this->_priceTagsList = NULL;
	this->_timerFlagsList = NULL;
	this->_flagSize = EFlagSize::Short;
}
