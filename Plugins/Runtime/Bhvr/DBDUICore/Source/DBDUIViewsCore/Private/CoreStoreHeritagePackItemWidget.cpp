#include "CoreStoreHeritagePackItemWidget.h"
#include "StoreHeritagePackViewData.h"

class UCoreButtonWidget;

void UCoreStoreHeritagePackItemWidget::SetData_Implementation(const FStoreHeritagePackViewData& data)
{

}

void UCoreStoreHeritagePackItemWidget::OnItemUnhovered_Implementation(UCoreButtonWidget* button)
{

}

void UCoreStoreHeritagePackItemWidget::OnBuyButtonClicked(UCoreButtonWidget* button)
{

}

UCoreStoreHeritagePackItemWidget::UCoreStoreHeritagePackItemWidget()
{
	this->TitleTB = NULL;
	this->ContentDescriptionTB = NULL;
	this->PremiumBuyButton = NULL;
	this->OnHoverBorder = NULL;
}
