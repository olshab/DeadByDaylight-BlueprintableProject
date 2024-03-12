#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "K29SurvivorStatus.h"
#include "K29PowerStatusHandlerComponent.generated.h"

class UChargeableInteractionDefinition;
class UK29SurvivorThrowableComponent;
class ASlasherPlayer;
class UCurveFloat;
class UStatusEffect;
class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK29_API UK29PowerStatusHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maxInfectionLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _infectionAddedPerTickWhileActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _stabilizingHealAmountByUsage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _initialInfectionLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _addedInfectionLevelsOnGrab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _infectionHealingMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _infectionIncubationThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _useInfectionRemoverChargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _hinderedStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _gateBlockerStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UK29SurvivorThrowableComponent> _survivorThrowableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UChargeableInteractionDefinition> _useInfectionRemoverInteractionSelfClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UChargeableInteractionDefinition> _useInfectionRemoverInteractionOtherClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _maxInfectionLevelWhenHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _recentlyGrabbedThresholdSeconds;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SurvivorStatusList, meta=(AllowPrivateAccess=true))
	TArray<FK29SurvivorStatus> _survivorStatusList;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_ReleaseSurvivor(ACamperPlayer* survivor, bool isForced);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_GrabSurvivor(ACamperPlayer* survivor, const bool isProcessingInitialInfection);

	UFUNCTION(BlueprintCallable)
	void OnRep_SurvivorStatusList(TArray<FK29SurvivorStatus> oldSurvivorStatus);

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_UseStabilizingSpray(ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RemoveSurvivorFromCloset(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ReleaseSurvivor(ACamperPlayer* survivor, bool isForced);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_GrabSurvivor(ACamperPlayer* survivor, const bool isProcessingInitialInfection);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DropSurvivor(ACamperPlayer* leftSurvivor);

	UFUNCTION(BlueprintCallable)
	bool IsInfectionIncreasingForSurvivor(const ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintCallable)
	int32 GetMaxInfectionLevel();

	UFUNCTION(BlueprintCallable)
	int32 GetInfectionLevel(const ACamperPlayer* survivor);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGrabbingNonInfectedSurvivor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGrabbingInfectedSurvivor();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_UseStabilizingSpray(ACamperPlayer* instigatingSurvivor, ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintCallable, Exec)
	void Authority_SetAllSurvivorsToMaxInfection();

	UFUNCTION(BlueprintCallable, Exec)
	void Authority_SetAllSurvivorsToInitialInfection();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorImmoblizedChanged();

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorAdded(ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSlash(ACamperPlayer* targetSurvivor);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroCompleted();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_HealInfectionLevels(const ACamperPlayer* survivor, const int32 infectionLevelsToHeal, const bool shouldSetInfectionActiveToFalse);

	UFUNCTION(BlueprintCallable, Exec)
	void Authority_HealAllSurvivorsInfectionWithStabilizingSpray();

	UFUNCTION(BlueprintCallable)
	void Authority_AddInfectionLevels(const ACamperPlayer* survivor, const int32 infectionToAdd);

	UFUNCTION(BlueprintCallable)
	void AddToTimesCuredByHeal(const ACamperPlayer* survivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK29PowerStatusHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29PowerStatusHandlerComponent) { return 0; }
