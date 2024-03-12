#include "CoreStoreCollectionsCustomizationsWidget.h"
#include "ECurrencyType.h"

class UCoreButtonWidget;

void UCoreStoreCollectionsCustomizationsWidget::OnItemUnlockTriggered(const ECurrencyType currencyType)
{

}

void UCoreStoreCollectionsCustomizationsWidget::OnItemEquipClicked(UCoreButtonWidget* buttonTarget)
{

}

UCoreStoreCollectionsCustomizationsWidget::UCoreStoreCollectionsCustomizationsWidget()
{
	this->_currencySwitcherWidgetClass = NULL;
	this->_preConstructedCurrencyButtonCount = 2;
	this->_currencyButtonAlignment = ETextJustify::Right;
	this->CurrencyButtonsTitleTB = NULL;
	this->CurrencyButtonsHorizontalBox = NULL;
	this->EquipButton = NULL;
	this->_currencyButtonList = NULL;
	this->CollectionNameTB = NULL;
}
