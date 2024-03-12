#include "BloodChargePlayerComponent.h"
#include "Net/UnrealNetwork.h"

void UBloodChargePlayerComponent::OnRep_BloodChargeAmount(int32 oldAmount)
{

}

void UBloodChargePlayerComponent::OnLevelReadyToPlay()
{

}

void UBloodChargePlayerComponent::OnHudPresenterReady() const
{

}

void UBloodChargePlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UBloodChargePlayerComponent, _bloodChargeAmount);
	DOREPLIFETIME(UBloodChargePlayerComponent, _lastChargeChangeFromStealing);
}

UBloodChargePlayerComponent::UBloodChargePlayerComponent()
{
	this->_bloodChargeAmount = 0;
	this->_lastChargeChangeFromStealing = false;
}
