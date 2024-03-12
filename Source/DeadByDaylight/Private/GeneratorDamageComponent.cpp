#include "GeneratorDamageComponent.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UGeneratorDamageComponent::OnRep_DamageData()
{

}

void UGeneratorDamageComponent::Multicast_DamageEffects_Implementation(const float immediateRegressionPercent, const TArray<ADBDPlayer*>& repairers, const bool playLoudNoise)
{

}

bool UGeneratorDamageComponent::IsRegressing() const
{
	return false;
}

bool UGeneratorDamageComponent::IsIntenseDamage() const
{
	return false;
}

void UGeneratorDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGeneratorDamageComponent, _damageData);
}

UGeneratorDamageComponent::UGeneratorDamageComponent()
{

}
