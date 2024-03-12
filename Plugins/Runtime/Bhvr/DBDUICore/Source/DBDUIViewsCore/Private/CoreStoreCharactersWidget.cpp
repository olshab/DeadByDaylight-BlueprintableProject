#include "CoreStoreCharactersWidget.h"
#include "ECurrencyType.h"

class UCoreButtonWidget;

void UCoreStoreCharactersWidget::OnZoomCharmClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersWidget::OnPlayMoriClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersWidget::OnItemUnlockTriggered(const ECurrencyType currencyType)
{

}

void UCoreStoreCharactersWidget::OnItemSelectAllClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersWidget::OnItemEquipClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersWidget::OnItemEquipAllClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreCharactersWidget::OnItemAlternativeUnlockClicked(UCoreButtonWidget* buttonTarget)
{

}

UCoreStoreCharactersWidget::UCoreStoreCharactersWidget()
{
	this->_currencySwitcherWidgetClass = NULL;
	this->_preConstructedCurrencyButtonCount = 2;
	this->_currencyButtonAlignment = ETextJustify::Right;
	this->SelectedCharacterNameTB = NULL;
	this->CurrencyButtonsTitleTB = NULL;
	this->CurrencyButtonsVerticalBox = NULL;
	this->EquipButton = NULL;
	this->EquipAllButton = NULL;
	this->SelectAllButton = NULL;
	this->AlternativeUnlockButton = NULL;
	this->AlternativeUnlockMessageTB = NULL;
	this->AlternativeUnlockNameTB = NULL;
	this->PlayMoriButton = NULL;
	this->ZoomCharmButton = NULL;
	this->_currencyButtonList = NULL;
}
