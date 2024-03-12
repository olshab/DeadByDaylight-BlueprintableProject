#include "K35KillerEffectTracker.h"
#include "GameEventData.h"
#include "Net/UnrealNetwork.h"
#include "K35KillerEffectData.h"
#include "GameplayTagContainer.h"

class ACamperPlayer;
class ASlasherPlayer;

void UK35KillerEffectTracker::OnRep_KillerEffectData(TArray<FK35KillerEffectData> oldKillerEffectData)
{

}

void UK35KillerEffectTracker::OnIntroCompleted()
{

}

float UK35KillerEffectTracker::GetKillerEffectRemovalProgressionForSurvivor(const ACamperPlayer* survivor) const
{
	return 0.0f;
}

void UK35KillerEffectTracker::Authority_OnSurvivorInjuredByAreaBlast(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK35KillerEffectTracker::Authority_OnSurvivorFinishedRepairingGenerator(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK35KillerEffectTracker::Authority_OnSurvivorEscaped(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK35KillerEffectTracker::Authority_OnSurvivorDowned(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK35KillerEffectTracker::Authority_OnSurvivorAdded(ACamperPlayer* survivor, ASlasherPlayer* killer)
{

}

void UK35KillerEffectTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK35KillerEffectTracker, _killerEffectData);
}

UK35KillerEffectTracker::UK35KillerEffectTracker()
{
	this->_killerEffectData = TArray<FK35KillerEffectData>();
}
