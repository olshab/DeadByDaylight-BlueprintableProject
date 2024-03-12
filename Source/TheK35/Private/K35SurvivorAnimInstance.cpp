#include "K35SurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UK35SurvivorAnimInstance::StartKillCam()
{

}

void UK35SurvivorAnimInstance::ResetRespondingToProjectileHinderedEvent()
{

}

void UK35SurvivorAnimInstance::ResetRespondingToInfectionEvent()
{

}

void UK35SurvivorAnimInstance::ResetRespondingToAreaBlastInjuryEvent()
{

}

void UK35SurvivorAnimInstance::OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void UK35SurvivorAnimInstance::EndKillCam()
{

}

UK35SurvivorAnimInstance::UK35SurvivorAnimInstance()
{
	this->_isDestroyingKillerTeleportPoint = false;
	this->_huskDestructionHorizontalCameraOffset = 0.000000;
	this->_huskDestructionVerticalCameraOffset = 0.000000;
	this->_isAfflictedByKillerEffect = false;
	this->_isRespondingToKillerTeleportPointInterruptByTeleport = false;
	this->_isRespondingToInfection = false;
	this->_isRespondingToProjectileHindered = false;
	this->_isRespondingToAreaBlastInjury = false;
	this->_damageState = ECamperDamageState::VE_Healthy;
	this->_destroyLingerTime = 0.125000;
}
