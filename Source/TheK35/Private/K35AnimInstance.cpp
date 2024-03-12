#include "K35AnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UK35AnimInstance::ResetIsShootingAreaBlastTravelProjectile()
{

}

void UK35AnimInstance::OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UK35AnimInstance::UK35AnimInstance()
{
	this->_isChargingAreaBlastTravelProjectile = false;
	this->_isShootingAreaBlastTravelProjectile = false;
	this->_isTeleporting = false;
}
