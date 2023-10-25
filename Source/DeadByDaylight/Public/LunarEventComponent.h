#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "LunarEventComponent.generated.h"

class ALanternInteractable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULunarEventComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_lanternCollectedCount, meta=(AllowPrivateAccess=true))
	int32 _lanternCollectedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _additionalEventProgressCount;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_lanternCollectedCount();

	UFUNCTION(BlueprintCallable)
	void OnLanternHoldTimerEnd();

	UFUNCTION()
	void OnFinishedPlaying(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
	void Multicast_ResetLanternLight(ALanternInteractable* lanternInteractable);

	UFUNCTION()
	void Local_OnCamperLostLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Local_OnCamperEscape(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnSlasherDestroysLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnPlayerLeaveGame(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnPickupLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnFixGenerator(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnDestroyCamperLightGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnCamperLostLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnCamperEscape(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULunarEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULunarEventComponent) { return 0; }
