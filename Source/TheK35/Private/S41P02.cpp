#include "S41P02.h"
#include "Net/UnrealNetwork.h"

void US41P02::OnRep_InteractionAttacherComponent()
{

}

void US41P02::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US41P02, _interactionAttacherComponent);
}

US41P02::US41P02()
{
	this->_timedRevealKillerAuraEffectClass = NULL;
	this->_auraDuration = 0.000000;
	this->_selfHealNoMedkitSpeedPenaltyEffectClass = NULL;
	this->_selfHealSpeedPenalty = 0.000000;
	this->_s41p02HealInteraction = NULL;
	this->_interactionAttacherComponent = NULL;
}
