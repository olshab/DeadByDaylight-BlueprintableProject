#include "CoreStoreSpecialPacksPackItemWidget.h"

class UStoreSpecialPackViewData;

void UCoreStoreSpecialPacksPackItemWidget::SetData_Implementation(UStoreSpecialPackViewData* data)
{

}

void UCoreStoreSpecialPacksPackItemWidget::OnCurrencyBuyButtonClicked()
{

}

UCoreStoreSpecialPacksPackItemWidget::UCoreStoreSpecialPacksPackItemWidget()
{
	this->TimerText = NULL;
	this->TitleText = NULL;
	this->CharactersBox = NULL;
	this->CustomizationsBox = NULL;
	this->CurrencyBuyButton = NULL;
	this->_isExpanded = true;
	this->_initialItemPoolSize = 2;
	this->_characterItemWidgetClass = NULL;
	this->_customizationItemWidgetClass = NULL;
	this->_data = NULL;
	this->_characterList = NULL;
	this->_customizationList = NULL;
}
