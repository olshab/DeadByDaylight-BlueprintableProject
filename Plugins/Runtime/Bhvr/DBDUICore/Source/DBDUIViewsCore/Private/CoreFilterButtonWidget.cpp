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
	this->LabelIMG = NULL;
	this->_filterOption = EItemFilterOption::None;
	this->_isToggled = false;
	this->FavoriteTagTexture = NULL;
	this->OwnedTagTexture = NULL;
	this->_defaultToggleState = false;
}
