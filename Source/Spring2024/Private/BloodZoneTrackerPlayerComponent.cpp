#include "BloodZoneTrackerPlayerComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UBloodZoneTrackerPlayerComponent::OnRep_IsInBloodZone()
{

}

void UBloodZoneTrackerPlayerComponent::Authority_OnPlayerExitBloodZone(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UBloodZoneTrackerPlayerComponent::Authority_OnPlayerEnterBloodZone(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UBloodZoneTrackerPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UBloodZoneTrackerPlayerComponent, _isInBloodZone);
}

UBloodZoneTrackerPlayerComponent::UBloodZoneTrackerPlayerComponent()
{
	this->_authority_bloodZonesInRange = TArray<ABloodZone*>();
}
