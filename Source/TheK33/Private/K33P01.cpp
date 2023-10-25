#include "K33P01.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class ACamperPlayer;

void UK33P01::Multicast_RevealAndMakeSurvivorScream_Implementation(ACamperPlayer* survivor)
{

}

void UK33P01::Authority_OnHealthStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UK33P01::UK33P01()
{
	this->_perkActivationTime = 0.000000;
	this->_perkCooldownTime = 0.000000;
	this->_blindedStatusEffect = NULL;
	this->_blindedEffectDuration = 0.000000;
	this->_activatedSurvivors = TArray<ACamperPlayer*>();
}
