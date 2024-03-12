#pragma once

#include "CoreMinimal.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "BaseCamperCollectable.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "K32Emp.generated.h"

class ADBDPlayer;
class UStatusEffect;
class ACamperPlayer;
class UChargeableComponent;
class AK32KillerPod;
class UK32EmpInteraction;

UCLASS(Blueprintable)
class THEK32_API AK32Emp : public ABaseCamperCollectable, public IPoolableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _customStrafingOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _strafingOffsetMultiplier;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UK32EmpInteraction* _empInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _empInteractionChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _empInteractionSecondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _empRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _empAmmoCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealToSurvivorStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _authority_assimilatedSurvivorsInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<AK32KillerPod*> _authority_podsInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_NumTargetsInRange, meta=(AllowPrivateAccess=true))
	int32 _numTargetsInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsVisible, meta=(AllowPrivateAccess=true))
	bool _isVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsAcquiredFromPool, meta=(AllowPrivateAccess=true))
	bool _isAcquiredFromPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, UStatusEffect*> _revealToSurvivorStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _previousCollector;

private:
	UFUNCTION(BlueprintCallable)
	void SetComponentContextProviders();

	UFUNCTION(BlueprintCallable)
	void OnRep_NumTargetsInRange();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsVisible(bool previousIsVisible);

	UFUNCTION(BlueprintCallable)
	void OnRep_IsAcquiredFromPool();

	UFUNCTION(BlueprintCallable)
	void OnEmpInteractionFinished(ADBDPlayer* interactingPlayer, bool hasInteractionStarted);

	UFUNCTION(BlueprintCallable)
	void OnEmpInteractionEntered(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_UseEmp(const int32 numAffectedTargets, ADBDPlayer* interactingPlayer);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVisibilityChanged(bool previousIsVisible, bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPickedUp();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNumTargetsInRangeChanged(int32 numberOfAffectedTargets);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEmpInteractionStarted();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEmpInteractionFinished(int32 numberOfAffectedTargets, ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEmpInteractionCancelled();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDropped();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32Emp();
};

FORCEINLINE uint32 GetTypeHash(const AK32Emp) { return 0; }
