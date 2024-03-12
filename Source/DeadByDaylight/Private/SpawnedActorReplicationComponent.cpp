#include "SpawnedActorReplicationComponent.h"
#include "Net/UnrealNetwork.h"

void USpawnedActorReplicationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USpawnedActorReplicationComponent, _replicatedTags);
}

USpawnedActorReplicationComponent::USpawnedActorReplicationComponent()
{
	this->_replicatedTags = TArray<FName>();
}
