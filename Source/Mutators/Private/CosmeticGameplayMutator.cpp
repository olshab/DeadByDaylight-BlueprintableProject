#include "CosmeticGameplayMutator.h"
#include "Net/UnrealNetwork.h"

void UCosmeticGameplayMutator::OnRep_IsInitialized()
{

}

void UCosmeticGameplayMutator::OnRep_IsEnabled()
{

}

void UCosmeticGameplayMutator::OnLocallyObservedChanged()
{

}

void UCosmeticGameplayMutator::DBD_ShowCosmeticMutators(const bool isVisible, const FString& localPlayerId)
{

}

void UCosmeticGameplayMutator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCosmeticGameplayMutator, _isInitialized);
	DOREPLIFETIME(UCosmeticGameplayMutator, _isEnabled);
}

UCosmeticGameplayMutator::UCosmeticGameplayMutator()
{
	this->_isInitialized = false;
	this->_isEnabled = true;
}
