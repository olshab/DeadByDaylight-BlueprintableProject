#include "PickupInteraction.h"

UPickupInteraction::UPickupInteraction()
{
	this->_nonOverrideableInteractionsOnTargetPlayer = TArray<FString>();
	this->_overrideableInteractions = TArray<FString>();
}
