#include "CoreStoreItemWidget.h"
#include "EStoreItemLayout.h"

class UCoreSelectableButtonWidget;
class UStoreItemViewData;
class UCoreButtonWidget;

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

UCoreStoreItemWidget::UCoreStoreItemWidget()
{
	this->_layoutMask = 0;
	this->_priceTagWidgetClass = NULL;
	this->_tooltipHorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->_tooltipVerticalAlignment = ETooltipVerticalAlignment::Default;
	this->ItemIcon = NULL;
	this->LayoutScale = NULL;
	this->SelectedOverlay = NULL;
	this->OnHoverBorder = NULL;
	this->PriceTagsVerticalBox = NULL;
	this->OwnedTagText = NULL;
}
