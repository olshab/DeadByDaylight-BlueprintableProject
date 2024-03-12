#include "K35Power.h"
#include "Net/UnrealNetwork.h"
#include "InteractionAttacherComponent.h"

class ACamperPlayer;

void AK35Power::OnSurvivorAdded(ACamperPlayer* survivor) const
{

}

void AK35Power::OnKillerTeleportPointCosmeticIdleTimeComplete()
{

}

void AK35Power::OnKillerCosmeticIdleTimeComplete()
{

}

void AK35Power::OnIntroCompleted()
{

}

void AK35Power::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK35Power, _areaBlast);
	DOREPLIFETIME(AK35Power, _decoy);
}

AK35Power::AK35Power()
{
	this->_areaBlastClass = NULL;
	this->_decoyClass = NULL;
	this->_teleportPointTargetingIndicatorClass = NULL;
	this->_extendedDestructionTimeWhenInfectedStatusEffect = NULL;
	this->_interactionAttacherComponent = CreateDefaultSubobject<UInteractionAttacherComponent>(TEXT("InteractionAttacherComponent"));
	this->_cosmeticIdleTimerBuffer = 3.000000;
	this->_minKillerCosmeticIdleTime = 15.000000;
	this->_maxKillerCosmeticIdleTime = 25.000000;
	this->_minKillerTeleportPointCosmeticIdleTime = 15.000000;
	this->_maxKillerTeleportPointCosmeticIdleTime = 25.000000;
	this->_areaBlast = NULL;
	this->_decoy = NULL;
	this->_teleportPointTargetingIndicator = NULL;
}
