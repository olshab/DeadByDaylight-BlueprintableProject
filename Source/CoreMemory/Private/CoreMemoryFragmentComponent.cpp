#include "CoreMemoryFragmentComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;

void UCoreMemoryFragmentComponent::Server_OnFragmentCollected_Implementation()
{

}

void UCoreMemoryFragmentComponent::OnRep_WasTriggered()
{

}

void UCoreMemoryFragmentComponent::OnRep_OwningPlayer()
{

}

void UCoreMemoryFragmentComponent::OnRep_IsDespawned()
{

}

void UCoreMemoryFragmentComponent::OnLocallyObservedChanged(bool isLocallyObserved)
{

}

void UCoreMemoryFragmentComponent::OnCollectZoneEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void UCoreMemoryFragmentComponent::Multicast_FragmentDespawnCountdown_Implementation(float floatVal) const
{

}

void UCoreMemoryFragmentComponent::Authority_OnTriggerZoneExited(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void UCoreMemoryFragmentComponent::Authority_OnTriggerZoneEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void UCoreMemoryFragmentComponent::Authority_CheckLineOfSight()
{

}

void UCoreMemoryFragmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCoreMemoryFragmentComponent, _owningPlayer);
	DOREPLIFETIME(UCoreMemoryFragmentComponent, _controller);
	DOREPLIFETIME(UCoreMemoryFragmentComponent, _wasTriggered);
	DOREPLIFETIME(UCoreMemoryFragmentComponent, _isDespawned);
}

UCoreMemoryFragmentComponent::UCoreMemoryFragmentComponent()
{
	this->_owningPlayer = NULL;
	this->_controller = NULL;
	this->_lineOfSightTimerRate = 0.160000;
	this->_wasTriggered = false;
	this->_isDespawned = false;
}
