#include "K35NeckWormAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class ASlasherPlayer;

void UK35NeckWormAnimInstance::ResetIsShootingAreaBlastTravelProjectile()
{

}

void UK35NeckWormAnimInstance::OnKillerSet(ASlasherPlayer* killer)
{

}

void UK35NeckWormAnimInstance::OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UK35NeckWormAnimInstance::UK35NeckWormAnimInstance()
{
	this->_isChargingAreaBlastTravelProjectile = false;
	this->_isShootingAreaBlastTravelProjectile = false;
}
