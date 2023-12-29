#include "CorePlayerProfileWidget.h"

class UCoreButtonWidget;

void UCorePlayerProfileWidget::OnPlayerProfileClicked(UCoreButtonWidget* button)
{

}

void UCorePlayerProfileWidget::OnPlayerCardButtonUnhovered(UCoreButtonWidget* button)
{

}

void UCorePlayerProfileWidget::OnPlayerCardButtonHovered(UCoreButtonWidget* button)
{

}

UCorePlayerProfileWidget::UCorePlayerProfileWidget()
{
	this->PlayerCardButton = NULL;
	this->Wallet = NULL;
	this->PlayerName = NULL;
	this->_playerCardEnabledOpacity = 1.000000;
	this->_playerCardDisabledOpacity = 0.500000;
	this->_playerProfileFocusOpacity = 1.000000;
	this->_playerProfileUnfocusOpacity = 0.100000;
	this->_isProfileMenuContextEntered = false;
}
