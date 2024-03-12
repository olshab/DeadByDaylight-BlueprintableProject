#include "K35KillerTeleportPointAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UK35KillerTeleportPointAnimInstance::ResetIsKillerTeleportingToOwner()
{

}

void UK35KillerTeleportPointAnimInstance::OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UK35KillerTeleportPointAnimInstance::UK35KillerTeleportPointAnimInstance()
{
	this->_isVisible = false;
	this->_isOnCooldown = false;
	this->_isBeingDestroyedBySurvivor = false;
	this->_isKillerTeleportingToOwner = false;
}
