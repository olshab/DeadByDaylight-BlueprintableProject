#include "CoreFilterButtonWidget.h"

void UCoreFilterButtonWidget::SetToggledState(bool isToggled)
{

}

bool UCoreFilterButtonWidget::IsToggled() const
{
	return false;
}

UCoreFilterButtonWidget::UCoreFilterButtonWidget()
{
	this->_isAvailableOption = false;
	this->_isOwnedOption = false;
	this->_itemRarityFilterOption = EItemRarity::Common;
	this->_isToggled = false;
	this->_defaultToggleState = false;
}
