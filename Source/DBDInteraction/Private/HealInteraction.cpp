#include "HealInteraction.h"
#include "CamperHealResult.h"

class ADBDPlayer;
class ACamperPlayer;
class AActor;

bool UHealInteraction::HasChargedMedkit(const ADBDPlayer* player) const
{
	return false;
}

ACamperPlayer* UHealInteraction::GetTargetSurvivor() const
{
	return NULL;
}

float UHealInteraction::GetHealScorePercent(float delta) const
{
	return 0.0f;
}

void UHealInteraction::Authority_OnSurvivorHealed(const FCamperHealResult& healResult)
{

}

void UHealInteraction::Authority_OnPlayerHealed_Implementation(ADBDPlayer* healingPlayer, ADBDPlayer* healedPlayer)
{

}

void UHealInteraction::Authority_OnHealChargeApplied_Implementation(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime)
{

}

UHealInteraction::UHealInteraction()
{
	this->_healingPlayer = NULL;
}
