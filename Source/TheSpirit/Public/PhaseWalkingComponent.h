#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "Components/ActorComponent.h"
#include "OnGameEndedVFX.h"
#include "PhaseWalkingInterface.h"
#include "PhaseWalkInfo.h"
#include "DBDBidirectionalTimer.h"
#include "OnPhaseWalkInfoReceived.h"
#include "TriggerSurvivorVisibilityVFX.h"
#include "TriggerKillerVisibilityVFX.h"
#include "OnMaxActivePhaseWalkCharges.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "TagStateBool.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "DBDTimer.h"
#include "PhaseWalkingComponent.generated.h"

class UDecoySlasherComponent;
class AActor;
class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THESPIRIT_API UPhaseWalkingComponent : public UActorComponent, public IPhaseWalkingInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPhaseWalkInfoReceived OnPhaseWalkInfoReceived;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnGameEndedVFX OnGameEndedVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FTriggerSurvivorVisibilityVFX TriggerSurvivorVisibilityVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FTriggerKillerVisibilityVFX TriggerKillerVisibilityVFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnMaxActivePhaseWalkCharges OnMaxActivePhaseWalkCharges;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _huskClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isActivePhaseWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isPassivePhaseWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInPostActivePhaseWalk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isInteractionPhaseWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	AActor* _husk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FDBDBidirectionalTimer _activePhaseWalkCharges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _survivorsAreVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _passivePhaseWalkHusksCount;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _isVisibleDuringPhaseWalkTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _activePhaseWalkChargeGainRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _passivePhaseWalkDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _passivePhaseWalkFirstCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _passivePhaseWalkCooldownDurationMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _passivePhaseWalkCooldownDurationMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _activePhaseWalkMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _postActivePhaseWalkDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _activePhaseWalkMaxAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _defaultMaxAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _postPhaseWalkSpeedCurve;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateSurvivorVisibility(bool visible);

	UFUNCTION(BlueprintCallable)
	void UpdateKillerVisibility();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SpawnPassivePhaseWalkHusks();

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_Broadcast_PhaseWalk(const FPhaseWalkInfo& phaseWalkInfo);

protected:
	UFUNCTION(BlueprintCallable)
	void RefillActivePhaseWalkCharges();

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
	void Multicast_Broadcast_PhaseWalk(const FPhaseWalkInfo& phaseWalkInfo);

public:
	UFUNCTION(BlueprintCallable)
	void ModifyActivePhaseWalkCharges(float delta);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MakePassivePhaseWalkHusksVisible(const FTransform& huskTransform, float opacityValue, float speedValue);

public:
	UFUNCTION(BlueprintCallable)
	void Local_PhaseWalk(const FPhaseWalkInfo& phaseWalkInfo);

	UFUNCTION(BlueprintCallable)
	void Local_EndPhaseWalks();

	UFUNCTION(BlueprintPure)
	bool IsPhaseWalking() const;

	UFUNCTION(BlueprintPure)
	bool IsPassivePhaseWalking() const;

	UFUNCTION(BlueprintPure)
	bool IsDecoyActive() const;

	UFUNCTION(BlueprintPure)
	bool IsActivePhaseWalking() const;

protected:
	UFUNCTION(BlueprintPure)
	int32 GetSpiritPassivePhaseWalkHusksCountToSpawn() const;

public:
	UFUNCTION(BlueprintPure)
	FDBDTimer GetPassivePhaseWalkTimer() const;

	UFUNCTION(BlueprintPure)
	AActor* GetHusk() const;

	UFUNCTION(BlueprintPure)
	UDecoySlasherComponent* GetDecoySlasherComponent() const;

	UFUNCTION(BlueprintPure)
	float GetActivePhaseWalkCharges() const;

	UFUNCTION(BlueprintPure)
	float GetActivePhaseWalkChargePercentage() const;

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_RefillActivePhaseWalkCharges();

public:
	UFUNCTION(BlueprintPure)
	bool CanStartActivePhaseWalk() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsInPostActivePhaseWalk(bool value);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPhaseWalkingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPhaseWalkingComponent) { return 0; }
