#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "StatProperty.h"
#include "EInputInteractionType.h"
#include "TagStateBool.h"
#include "Templates/SubclassOf.h"
#include "CamperDistractionData.h"
#include "K34TipToeModeComponent.generated.h"

class UTimerObject;
class ASlasherPlayer;
class AK34TipToeDistraction;
class UStatusEffect;
class ULocalActorPoolComponent;
class UNavigationQueryFilter;
class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK34TipToeModeComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInTipToeMode)
	FTagStateBool _isInTipToeMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInTipToeModeCooldown)
	FTagStateBool _isInTipToeModeCooldown;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _tipToeModeStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _tipToeModeCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _tipToeModeCooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _tipToeModeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _tipToeModeDurationPenaltyPercentagePerM1Attempt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tipToeModeDurationWarningTimeUpAdvanceNotice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _tipToeModeDurationTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TipToeModeDurationWarningTimeUpTimer, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _tipToeModeDurationWarningTimeUpTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULocalActorPoolComponent* _authority_distractionPoolComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EInputInteractionType _inputToDisplayWhileInTipToeMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EInputInteractionType _inputToDisplayWhileInNormalMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _enterTipToeBufferToExit;

	UPROPERTY(EditAnywhere)
	int8 _distractionPoolSize;

	UPROPERTY(EditAnywhere)
	int8 _maxTryPerTickToFindSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _maxDistractionPerSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _distractionRandomSpawnRateMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _distractionRandomSpawnRateMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _distractionLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _spawnRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _spawnRadiusBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _directionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxVerticalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldMinimizeSpawnDistanceWhenInChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK34TipToeDistraction> _tipToeDistractionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UNavigationQueryFilter> _navQueryFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, FCamperDistractionData> _authority_survivorsData;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TipToeModeDurationWarningTimeUpTimer();

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsInTipToeModeCooldown() const;

	UFUNCTION(BlueprintCallable)
	void OnRep_IsInTipToeMode();

public:
	UFUNCTION(BlueprintCallable)
	bool IsInTipToeMode();

	UFUNCTION(BlueprintCallable)
	float GetTipToeModeDuration();

	UFUNCTION(BlueprintPure)
	float GetTipToeModeCooldownDuration() const;

	UFUNCTION(BlueprintPure)
	float GetRemainingTipToeModeDuration() const;

	UFUNCTION(BlueprintPure)
	float GetRemainingTipToeModeCooldownDuration() const;

protected:
	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetKiller() const;

public:
	UFUNCTION(BlueprintPure)
	bool CanEnterTipToeMode() const;

	UFUNCTION(BlueprintCallable)
	void Authority_SetIsInTipToeMode(bool isInTipToeMode);

	UFUNCTION(BlueprintCallable)
	void Authority_ReduceDuration(const float reductionPercentage);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void Authority_ReduceCooldown(const float reductionPercentage) const;

	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK34TipToeModeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34TipToeModeComponent) { return 0; }
