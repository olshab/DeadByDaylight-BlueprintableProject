#include "CoreChallengesMenuWidget.h"

class UCoreSelectableButtonWidget;

void UCoreChallengesMenuWidget::OnSettingsButtonClicked()
{

}

void UCoreChallengesMenuWidget::OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreChallengesMenuWidget::OnBackButtonClicked()
{

}

UCoreChallengesMenuWidget::UCoreChallengesMenuWidget()
{
	this->TabsContainer = NULL;
	this->BackInputSwitcher = NULL;
	this->SettingsInputSwitcher = NULL;
}
