#include "S28P02.h"

float US28P02::GetSelfHealSpeedPenaltyAtLevel() const
{
	return 0.0f;
}

float US28P02::GetHealingSpeedGainPercentageAtLevel() const
{
	return 0.0f;
}

bool US28P02::CanSelfHeal() const
{
	return false;
}

US28P02::US28P02()
{
	this->_healingSpeedGainPercentage = 0.000000;
	this->_canSelfHeal = true;
	this->_selfHealSpeedPenalty = 0.000000;
	this->_healingSpeedIncreaseEffect = NULL;
	this->_allowSelfHealEffectClass = NULL;
	this->_selfHealSpeedPenaltyEffectClass = NULL;
	this->_revealInjuredPlayersInBoonRangeEffectClass = NULL;
}
