#include "K35SightManager.h"
#include "Net/UnrealNetwork.h"

class UCharacterSightComponent;
class ACharacter;

void UK35SightManager::OnIntroCompleted()
{

}

void UK35SightManager::Authority_OnCharacterSightChanged(ACharacter* sightedCharacter, UCharacterSightComponent* sightComponent)
{

}

void UK35SightManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK35SightManager, _survivorLookStatus);
}

UK35SightManager::UK35SightManager()
{
	this->_survivorLookStatus = TArray<FK35SurvivorLookStatus>();
}
