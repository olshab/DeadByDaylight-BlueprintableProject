#include "MultiStatusEffectInfo.h"

FMultiStatusEffectInfo::FMultiStatusEffectInfo()
{
	this->EventTrigger = FGameplayTag{};
	this->RequireEventInstigatorToMatchAddonOwnerToImposeStatusEffects = false;
	this->RequireEventTargetToMatchAddonOwnerToImposeStatusEffects = false;
	this->StatusEffectLifetime = 0.0f;
	this->CustomParamValue = 0.0f;
	this->ImposeEffectTo = EMultiImposeEffectTo::EventInstigator;
	this->StatusEffect = NULL;
}
