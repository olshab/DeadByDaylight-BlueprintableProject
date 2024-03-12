#include "K34P01.h"
#include "ETotemState.h"

int32 UK34P01::GetStunnedOrBlindedTimesRequiredByLevel() const
{
	return 0;
}

int32 UK34P01::GetStunnedOrBlindedCount() const
{
	return 0;
}

float UK34P01::GetBlindedEffectTime() const
{
	return 0.0f;
}

void UK34P01::Client_UpdateHudIcon_Implementation(float percent)
{

}

void UK34P01::Authority_OnTotemStateChanged(const ETotemState oldState, const ETotemState newState)
{

}

UK34P01::UK34P01()
{
	this->_rampingBlindEffectClass = NULL;
	this->_rampingBlindRampTime = 0.200000;
	this->_stunnedOrBlindedTimesRequired = 0;
	this->_blindedEffectTime = 0.000000;
}
