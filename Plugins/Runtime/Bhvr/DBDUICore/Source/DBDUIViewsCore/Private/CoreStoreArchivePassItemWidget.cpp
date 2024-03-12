#include "CoreStoreArchivePassItemWidget.h"
#include "StoreArchivePassViewData.h"

class UCoreButtonWidget;

void UCoreStoreArchivePassItemWidget::SetData_Implementation(const FStoreArchivePassViewData& data)
{

}

void UCoreStoreArchivePassItemWidget::OnButtonUnhovered(UCoreButtonWidget* targetButton)
{

}

void UCoreStoreArchivePassItemWidget::OnButtonHovered(UCoreButtonWidget* targetButton)
{

}

UCoreStoreArchivePassItemWidget::UCoreStoreArchivePassItemWidget()
{
	this->IconIMG = NULL;
	this->TitleTB = NULL;
	this->SubTitleTB = NULL;
	this->OnHoverBorder = NULL;
}
