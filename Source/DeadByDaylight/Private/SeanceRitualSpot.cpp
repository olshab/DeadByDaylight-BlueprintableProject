#include "SeanceRitualSpot.h"
#include "Net/UnrealNetwork.h"

class UChargeableComponent;
class ACamperPlayer;
class AActor;

void ASeanceRitualSpot::OnRep_SurvivorsPerformingRitual()
{

}

void ASeanceRitualSpot::Multicast_OnSeanceCompleted_Implementation(ACamperPlayer* originator)
{

}

TArray<ACamperPlayer*> ASeanceRitualSpot::GetRitualPerformers() const
{
	return TArray<ACamperPlayer*>();
}

void ASeanceRitualSpot::Authority_OnPerformRitualChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{

}

void ASeanceRitualSpot::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime)
{

}

void ASeanceRitualSpot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASeanceRitualSpot, _ritualOriginator);
	DOREPLIFETIME(ASeanceRitualSpot, _survivorsPerformingRitual);
	DOREPLIFETIME(ASeanceRitualSpot, _ritualUseable);
}

ASeanceRitualSpot::ASeanceRitualSpot()
{
	this->_ritualChargeable = NULL;
	this->_secondsToCharge = 120.000000;
	this->_dechargeRate = 12.000000;
	this->_ritualOriginator = NULL;
	this->_survivorsPerformingRitual = TArray<ACamperPlayer*>();
	this->_revealAuraEffectClass = NULL;
	this->_ritualUseable = true;
	this->_authority_progressAmountsCumulative = TMap<ADBDPlayer*, float>();
}
