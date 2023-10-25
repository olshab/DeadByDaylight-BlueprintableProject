#include "HexUndying.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class UGameplayModifierContainer;
class ACamperPlayer;

float UHexUndying::GetRevealAuraDistanceFromTotemAtLevel() const
{
	return 0.0f;
}

void UHexUndying::Authority_UpdateHexPerkStatusView(UGameplayModifierContainer* gameplayModifierContainer, bool isApplicable)
{

}

void UHexUndying::Authority_OnSurvivorAdded(ACamperPlayer* survivor)
{

}

void UHexUndying::Authority_OnCamperCleansedHexPerk(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UHexUndying::UHexUndying()
{
	this->_revealAuraDistanceFromTotem = 0.000000;
}
