#include "SeanceRitualInteraction.h"

class ADBDPlayer;
class ASeanceRitualSpot;

bool USeanceRitualInteraction::IsInteractionPossibleInternal(const ADBDPlayer* player) const
{
	return false;
}

ASeanceRitualSpot* USeanceRitualInteraction::GetOwningRitualSpot() const
{
	return NULL;
}

float USeanceRitualInteraction::GetInteractionChargeSpeedMultiplier_Implementation(const ADBDPlayer* character) const
{
	return 0.0f;
}

USeanceRitualInteraction::USeanceRitualInteraction()
{
	this->_nonPerkOwnerMultiplier = 0.500000;
}
