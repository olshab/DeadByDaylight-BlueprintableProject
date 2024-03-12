#include "CoreStoreSpecialPackItemWidget.h"

class UStoreSpecialPackViewData;
class UStoreChapterPackViewData;
class UCoreButtonWidget;

void UCoreStoreSpecialPackItemWidget::SetSpecialPackData_Implementation(UStoreSpecialPackViewData* data)
{

}

void UCoreStoreSpecialPackItemWidget::SetChapterPackData_Implementation(UStoreChapterPackViewData* data)
{

}

void UCoreStoreSpecialPackItemWidget::OnPackClicked(UCoreButtonWidget* widget)
{

}

UCoreStoreSpecialPackItemWidget::UCoreStoreSpecialPackItemWidget()
{
	this->OnHoverBorder = NULL;
	this->TitleTB = NULL;
	this->OwnedCountTB = NULL;
	this->TimerFlag = NULL;
	this->SeeMoreButton = NULL;
	this->_packId = TEXT("");
}
