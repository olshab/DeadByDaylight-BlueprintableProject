#include "CoreShrineOfSecretsWidget.h"
#include "ShrineOfSecretsItemViewData.h"

void UCoreShrineOfSecretsWidget::OnPurchaseButtonClicked(const FShrineOfSecretsItemViewData& shrineOfSecretsItemViewData)
{

}

void UCoreShrineOfSecretsWidget::OnBackButtonClicked()
{

}

UCoreShrineOfSecretsWidget::UCoreShrineOfSecretsWidget()
{
	this->_shrineOfSecretsItemClass = NULL;
	this->TitleTB = NULL;
	this->SubtitleTB = NULL;
	this->TimerTB = NULL;
	this->ItemsContainer = NULL;
	this->InfoTB = NULL;
	this->BackInputSwitcher = NULL;
	this->_preConstructedItemsCount = 4;
	this->_shrineOfSecretsItems = NULL;
}
