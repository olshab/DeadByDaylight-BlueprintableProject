#include "ImposeStatusEffectOnMultiEventAddon.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UImposeStatusEffectOnMultiEventAddon::Authority_OnEventFired(const FGameplayTag gameEventTag, const FGameEventData& gameEventData)
{

}

UImposeStatusEffectOnMultiEventAddon::UImposeStatusEffectOnMultiEventAddon()
{
	this->_statusEffectInfo = TArray<FMultiStatusEffectInfo>();
}
