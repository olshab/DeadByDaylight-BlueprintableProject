#include "SeancePerformerComponent.h"
#include "Net/UnrealNetwork.h"

void USeancePerformerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USeancePerformerComponent, _ownedSeancePerks);
}

USeancePerformerComponent::USeancePerformerComponent()
{
	this->_ownedSeancePerks = TArray<USeancePerk*>();
	this->_ritualInteractionMultiplierAdditive = 0.500000;
}
