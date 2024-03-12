#include "ChallengesMenuEventRitualsSubPresenter.h"
#include "EChallengesMenuEventRitualsState.h"

void UChallengesMenuEventRitualsSubPresenter::SetEventRitualsState(const EChallengesMenuEventRitualsState eventRitualsState)
{

}

UChallengesMenuEventRitualsSubPresenter::UChallengesMenuEventRitualsSubPresenter()
{
	this->_ritualsSubPresenter = NULL;
	this->_rewardTrackSubPresenter = NULL;
	this->_storeSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
	this->_challengesMenuEventRitualsWidget = NULL;
}
