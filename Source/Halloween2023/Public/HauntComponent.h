#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EHalloweenWorldType.h"
#include "EPlayerRole.h"
#include "EOfferingEffectType.h"
#include "HauntComponent.generated.h"

class ADBDPlayer;
class UPlayersInZoneTracker;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2023_API UHauntComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerRoleEvent, const EPlayerRole, playerRole);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerInteract, ADBDPlayer*, player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHauntInteractionChange, const EPlayerRole, playerRole, bool, isInteractable);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHauntEvent);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerInteract Cosmetic_PlayerEnterHauntRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerInteract Cosmetic_PlayerLeavesHauntRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHauntInteractionChange Cosmetic_EnableHauntForInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	EPlayerRole _winningPlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInteractable)
	bool _isInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOfferingEffectType _offeringEffectTypeNeeded;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _stateTagsPreventingInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPlayersInZoneTracker* _slasherInZoneTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPlayersInZoneTracker* _survivorsInZoneTracker;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsInteractable();

	UFUNCTION(BlueprintCallable)
	void OnPlayerLeftZone(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnPlayerEnterZone(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnEventComponentsCreated();

public:
	UFUNCTION(BlueprintPure)
	EHalloweenWorldType GetHalloweenWorldType() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHauntComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHauntComponent) { return 0; }
