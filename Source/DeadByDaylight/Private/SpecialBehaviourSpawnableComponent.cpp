#include "SpecialBehaviourSpawnableComponent.h"

FSpecialBehaviourSpawnableComponent::FSpecialBehaviourSpawnableComponent()
{
	this->Component = NULL;
	this->ShouldSpawnOnSurvivor = false;
	this->ShouldSpawnOnKiller = false;
	this->ShouldSpawnOnGameState = false;
	this->ShouldSpawnOnPlayerClasses = TArray<TSoftClassPtr<ADBDPlayer>>();
}
