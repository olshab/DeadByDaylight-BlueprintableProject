#include "CoreStoreSpecialPackDetailsWidget.h"

class UCoreButtonWidget;

void UCoreStoreSpecialPackDetailsWidget::OnShowAnimationFinished_Implementation()
{

}

void UCoreStoreSpecialPackDetailsWidget::OnPremiumButtonClicked(UCoreButtonWidget* button)
{

}

void UCoreStoreSpecialPackDetailsWidget::OnHideAnimationFinished_Implementation()
{

}

void UCoreStoreSpecialPackDetailsWidget::OnCustomizationClicked(UCoreButtonWidget* button)
{

}

void UCoreStoreSpecialPackDetailsWidget::OnCurrencyButtonClicked(UCoreButtonWidget* button)
{

}

void UCoreStoreSpecialPackDetailsWidget::OnCharacterClicked(UCoreButtonWidget* button)
{

}

void UCoreStoreSpecialPackDetailsWidget::OnArchivePassClicked(UCoreButtonWidget* button)
{

}

UCoreStoreSpecialPackDetailsWidget::UCoreStoreSpecialPackDetailsWidget()
{
	this->PackIMG = NULL;
	this->PackTitleTB = NULL;
	this->OwnedTB = NULL;
	this->SubTextRTB = NULL;
	this->ContentPanel = NULL;
	this->CurrencyBuyButton = NULL;
	this->PremiumBuyButton = NULL;
	this->ArchivePassItem = NULL;
	this->ArchiveFragmentItem = NULL;
	this->_characterItemWidgetClass = NULL;
	this->_characterPoolSize = 2;
	this->_customizationItemWidgetClass = NULL;
	this->_customizationPoolSize = 2;
	this->_numOfColumns = 3;
	this->_data = NULL;
	this->_characterList = NULL;
	this->_customizationList = NULL;
}
