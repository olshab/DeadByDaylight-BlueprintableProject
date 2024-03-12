#include "SpecialEventVFXHelperComponent.h"

void USpecialEventVFXHelperComponent::RegisterListeners()
{

}

USpecialEventVFXHelperComponent::USpecialEventVFXHelperComponent()
{
	this->_componentsToSpawnOnHusk = TArray<TSubclassOf<UActorComponent>>();
}
