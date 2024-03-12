#include "Addon_ThePig_BaseStatusReverseBearTrap.h"

UAddon_ThePig_BaseStatusReverseBearTrap::UAddon_ThePig_BaseStatusReverseBearTrap()
{
	this->_statusEffectClass = NULL;
	this->_statusEffectPlayerMap = TMap<ADBDPlayer*, UStatusEffect*>();
}
