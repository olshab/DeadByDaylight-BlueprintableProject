#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "SurvivorStatusInterface.h"
#include "TormentAttackDamageCooldownInterface.h"
#include "Templates/SubclassOf.h"
#include "AgonyDisplayFxEvent.h"
#include "GameEventData.h"
#include "AgonyComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAgonyComponent : public UActorComponent, public ISurvivorStatusInterface, public ITormentAttackDamageCooldownInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInAgony, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInAgony;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FTagStateBool _isAgonyMoriable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _agonyNumberOfHookForMiniMori;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _inAttackTrailDamageCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _inTormentTrailKillerInstinctStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _attackTrailDamageCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FAgonyDisplayFxEvent> _showAgonyFXEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FAgonyDisplayFxEvent> _hideAgonyFXEvents;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void ShowAgonyBarbWireFX_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTrailEffectStop_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTrailEffectStart_Cosmetic();

private:
	UFUNCTION()
	void OnShowBarbWireFXOnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void OnRep_IsInAgony();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLocallyObservedChanged(bool isLocallyObserved);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnHitInAgony_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnHitByTormentAttackTrail_Cosmetic();

private:
	UFUNCTION()
	void OnHideBarbWireFXOnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnAgonyChanged_Cosmetic(const bool isInAgony);

public:
	UFUNCTION(BlueprintPure)
	bool IsInAgony() const;

	UFUNCTION(BlueprintPure)
	bool IsAgonyMoriable() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void HideAgonyBarbWireFX_Cosmetic();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnDrainStageChanged(const int32 drainStage, ADBDPlayer* target);

	UFUNCTION(BlueprintCallable)
	void Authority_OnAttackTrailDamageCooldownTimerDone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAgonyComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAgonyComponent) { return 0; }
