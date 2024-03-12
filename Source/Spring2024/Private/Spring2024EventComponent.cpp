#include "Spring2024EventComponent.h"

void USpring2024EventComponent::Authority_OnLevelReadyToPlay()
{

}

USpring2024EventComponent::USpring2024EventComponent()
{
	this->_survivorEventStatusEffect = NULL;
	this->_killerEventStatusEffect = NULL;
	this->_offeringStatusEffect = NULL;
	this->_dreamLevelBonusValue = TArray<FDBDTunableRowHandle>();
	this->_bloodZoneClassToSpawn = NULL;
	this->_eventCheatComponentClass = NULL;
}
