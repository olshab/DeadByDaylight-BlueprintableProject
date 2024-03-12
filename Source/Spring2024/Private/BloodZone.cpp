#include "BloodZone.h"
#include "Interactor.h"
#include "DBDOutlineComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "BloodZoneActivationInteraction.h"
#include "EBloodZoneState.h"
#include "Components/BoxComponent.h"
#include "BloodZoneOutlineUpdateStrategy.h"
#include "ChargeableComponent.h"
#include "BloodZoneDeactivationInteraction.h"

class ADBDPlayer;

void ABloodZone::OnSurvivorDeactivationInteractionEntered(ADBDPlayer* player)
{

}

void ABloodZone::OnSurvivorActivationInteractionEntered(ADBDPlayer* player)
{

}

void ABloodZone::OnRep_State(EBloodZoneState oldState)
{

}

void ABloodZone::OnKillerDeactivationInteractionEntered(ADBDPlayer* player)
{

}

void ABloodZone::OnKillerActivationInteractionEntered(ADBDPlayer* player)
{

}

void ABloodZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABloodZone, _state);
}

ABloodZone::ABloodZone()
{
	this->_bloodZoneStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("bloodZoneStaticMesh"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
	this->_outlineUpdateStrategy = CreateDefaultSubobject<UBloodZoneOutlineUpdateStrategy>(TEXT("OutlineUpdateStrategy"));
	this->_bloodZoneInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("bloodZoneInteractionZone"));
	this->_bloodZoneInteractor = CreateDefaultSubobject<UInteractor>(TEXT("bloodZoneInteractor"));
	this->_bloodZoneActivationInteractionSurvivor = CreateDefaultSubobject<UBloodZoneActivationInteraction>(TEXT("bloodZoneInteractionSurvivor"));
	this->_bloodZoneActivationInteractionKiller = CreateDefaultSubobject<UBloodZoneActivationInteraction>(TEXT("bloodZoneInteractionKiller"));
	this->_bloodZoneActivationChargeableSurvivor = CreateDefaultSubobject<UChargeableComponent>(TEXT("bloodZoneActivationChargeableSurvivor"));
	this->_bloodZoneActivationChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("bloodZoneActivationChargeableKiller"));
	this->_bloodZoneDeactivationInteractionSurvivor = CreateDefaultSubobject<UBloodZoneDeactivationInteraction>(TEXT("bloodZoneDeactivationInteractionSurvivor"));
	this->_bloodZoneDeactivationInteractionKiller = CreateDefaultSubobject<UBloodZoneDeactivationInteraction>(TEXT("bloodZoneDeactivationInteractionKiller"));
	this->_bloodZoneDeactivationChargeableSurvivor = CreateDefaultSubobject<UChargeableComponent>(TEXT("bloodZoneDeactivationChargeableSurvivor"));
	this->_bloodZoneDeactivationChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("bloodZoneDeactivationChargeableKiller"));
	this->_state = EBloodZoneState::Inactive;
}
