#include "SeancePerk.h"
#include "Net/UnrealNetwork.h"

void USeancePerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USeancePerk, _isSeancePerformed);
}

USeancePerk::USeancePerk()
{
	this->_seancePerformerComponentClass = NULL;
	this->_brokenEffect = NULL;
	this->_effectTarget = EManifestationTarget::AllPlayers;
	this->_isSeancePerformed = false;
	this->_destructivePerk = false;
}
