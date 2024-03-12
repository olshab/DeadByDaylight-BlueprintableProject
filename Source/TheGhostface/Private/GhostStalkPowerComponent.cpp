#include "GhostStalkPowerComponent.h"
#include "ELeanState.h"

void UGhostStalkPowerComponent::RefreshSurvivorMaximumSightDistance() const
{

}

void UGhostStalkPowerComponent::OnLeanStateChanged(ELeanState leanState)
{

}

void UGhostStalkPowerComponent::Authority_OnStalkModeChanged(bool isInStalkMode)
{

}

void UGhostStalkPowerComponent::Authority_OnIsCrouchedChanged(bool isCrouched)
{

}

UGhostStalkPowerComponent::UGhostStalkPowerComponent()
{
	this->_stalkerComponent = NULL;
	this->_ghostStalkedComponentClassPtr = NULL;
	this->_crouchAttackRequiredTimeSeconds = 0.000000;
	this->_debugMode = false;
	this->_ghostStalkSpeedStatusEffectClass = NULL;
}
