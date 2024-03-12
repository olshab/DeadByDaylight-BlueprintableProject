#include "K35KillerTeleportPointSpawningManager.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class ASlasherPlayer;
class AK35KillerTeleportPoint;

void UK35KillerTeleportPointSpawningManager::OnSurvivorInjuredWithKillerEffect(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK35KillerTeleportPointSpawningManager::OnSurvivorAfflictedWithKillerEffect(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK35KillerTeleportPointSpawningManager::OnKillerSet(ASlasherPlayer* killer)
{

}

void UK35KillerTeleportPointSpawningManager::OnKillerManuallyDestroyedKillerTeleportPoint(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK35KillerTeleportPointSpawningManager::OnIntroCompleted()
{

}

void UK35KillerTeleportPointSpawningManager::OnGeneratorFixed(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK35KillerTeleportPointSpawningManager::OnBreakWallOrPallet(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK35KillerTeleportPointSpawningManager::Multicast_OnSpawningStarted_Implementation()
{

}

void UK35KillerTeleportPointSpawningManager::Multicast_OnSpawningComplete_Implementation(AK35KillerTeleportPoint* acquiredTeleportPoint)
{

}

void UK35KillerTeleportPointSpawningManager::Multicast_OnSpawningCancelled_Implementation()
{

}

void UK35KillerTeleportPointSpawningManager::Multicast_OnHookCausedRecycle_Implementation()
{

}

void UK35KillerTeleportPointSpawningManager::Multicast_OnChargingStarted_Implementation()
{

}

void UK35KillerTeleportPointSpawningManager::Multicast_OnChargingComplete_Implementation()
{

}

void UK35KillerTeleportPointSpawningManager::Multicast_CompleteChargingTime_Implementation()
{

}

bool UK35KillerTeleportPointSpawningManager::IsSpawnTimerActive() const
{
	return false;
}

bool UK35KillerTeleportPointSpawningManager::IsChargeTimerActive() const
{
	return false;
}

bool UK35KillerTeleportPointSpawningManager::IsAbleToSpawnKillerTeleportPoint() const
{
	return false;
}

float UK35KillerTeleportPointSpawningManager::GetSpawnTimerProgress() const
{
	return 0.0f;
}

float UK35KillerTeleportPointSpawningManager::GetChargeTimerProgress() const
{
	return 0.0f;
}

void UK35KillerTeleportPointSpawningManager::Authority_OnSurvivorHookedChanged(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK35KillerTeleportPointSpawningManager::Authority_OnSpawnTimerEnded()
{

}

UK35KillerTeleportPointSpawningManager::UK35KillerTeleportPointSpawningManager()
{
	this->_spawnTimeMultiplierBySurvivorsAffectedWithKillerEffectCurve = NULL;
}
