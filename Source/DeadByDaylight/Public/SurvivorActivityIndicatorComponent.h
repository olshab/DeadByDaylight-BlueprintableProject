#pragma once

#include "CoreMinimal.h"
#include "SurvivorActivity.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "GameEventData.h"
#include "SurvivorActivityIndicatorComponent.generated.h"

class ADBDPlayer;
class USurvivorActivityData;
class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USurvivorActivityIndicatorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	USurvivorActivityData* _activitiesDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _durationNeededToEnableUI;

private:
	UFUNCTION(BlueprintCallable)
	void OnPlayerPickedUp(ADBDPlayer* picker);

	UFUNCTION(BlueprintCallable)
	void OnPlayerDropped();

	UFUNCTION(BlueprintCallable)
	void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

	UFUNCTION(BlueprintCallable)
	void OnChargeableProgressChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnCamperEscape();

	UFUNCTION(BlueprintCallable)
	void HandleStartActivityIfStillInEffect(const FSurvivorActivity activityViewInfo);

	UFUNCTION()
	void Authority_OnCamperEscape(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	USurvivorActivityIndicatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorActivityIndicatorComponent) { return 0; }
