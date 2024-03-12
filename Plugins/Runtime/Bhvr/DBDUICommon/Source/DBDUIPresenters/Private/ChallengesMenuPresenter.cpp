#include "ChallengesMenuPresenter.h"
#include "EChallengesMenuState.h"

void UChallengesMenuPresenter::SetMenuState(const EChallengesMenuState menuState)
{

}

void UChallengesMenuPresenter::OnSettingsButtonClicked()
{

}

void UChallengesMenuPresenter::OnBackButtonClicked()
{

}

UChallengesMenuPresenter::UChallengesMenuPresenter()
{
	this->ChallengesMenuWidgetClass = NULL;
	this->_dailyRitualsSubPresenter = NULL;
	this->_eventRitualsSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
}
