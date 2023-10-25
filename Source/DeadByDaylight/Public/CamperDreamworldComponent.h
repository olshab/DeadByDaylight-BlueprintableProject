#pragma once

#include "CoreMinimal.h"
#include "OnCamperTriggeredDreamTrap.h"
#include "FastTimer.h"
#include "CharacterDreamworldComponent.h"
#include "SurvivorSleepiness.h"
#include "Templates/SubclassOf.h"
#include "CamperDreamworldComponent.generated.h"

class ASlasherPlayer;
class ADBDPlayer;
class UStatusEffect;
class AWakerObject;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperDreamworldComponent : public UCharacterDreamworldComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCamperTriggeredDreamTrap OnCamperTriggeredDreamTrap;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _survivorDreamWorldStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FSurvivorSleepiness _survivorSleepiness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _sleepinessProtectionRemainingDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _sleepGainPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	int32 _wakeUpByOtherCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ShowKiller, Transient, meta=(AllowPrivateAccess=true))
	bool _showKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FFastTimer _killerGlimpseDurationTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FFastTimer _killerGlimpseCooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _glimpseMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _glimpseMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _killerGlimpseCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _killerGlimpseDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	int32 _wakeUpBySkillCheckCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	int32 _fellAsleepCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _forcedAsleep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AWakerObject* _linkedWaker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _useScriptedKillerVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _showKillerInstantly;

public:
	UFUNCTION(BlueprintPure)
	bool ShouldLookSleepyToLocalPlayer() const;

	UFUNCTION(BlueprintCallable)
	void SetScriptedKillerVisibility(bool useScriptedKillerVisibility);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ShowKiller();

public:
	UFUNCTION(BlueprintCallable)
	void Local_SetShowKiller(bool showKiller, bool instantly);

private:
	UFUNCTION(BlueprintCallable)
	void InitializeTunableValues(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void HandleShowKillerChanged(bool showKiller, bool instantly);

public:
	UFUNCTION(BlueprintPure)
	int32 GetWakeUpByOtherCount() const;

	UFUNCTION(BlueprintPure)
	bool CanWakeUpBySkillCheck() const;

	UFUNCTION(BlueprintPure)
	bool CanWakeUp() const;

	UFUNCTION(BlueprintCallable)
	void BroadcastCamperTriggeredDreamTrap(AActor* dreamObject);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_WakeUpByWakerObject();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_WakeUpByOther(ADBDPlayer* instigator);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_WakeUpByHook();

	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SpawnDreamworldStatusEffect() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_PutAsleep();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnAttacked();

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_HandleSkillCheckFailure(bool wakeUpEveryoneInteracting, ADBDPlayer* instigator);

	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly)
	int32 Authority_GetWakeUpBySkillCheckCount() const;

	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly)
	int32 Authority_GetFellAsleepCount() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCamperDreamworldComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperDreamworldComponent) { return 0; }
