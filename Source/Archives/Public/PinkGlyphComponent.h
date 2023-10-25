#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "SpeedBasedNetSyncedValue.h"
#include "ECamperDamageState.h"
#include "PinkGlyphComponent.generated.h"

class UStatusEffect;
class UTileSpawnPoint;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ARCHIVES_API UPinkGlyphComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMarkProgressChanged, float, progress);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGlyphEvent);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnMarkProgressChanged OnMarkProgressChanged_Cosmetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnGlyphEvent OnStartMarking_Cosmetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnGlyphEvent OnStopMarking_Cosmetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnGlyphEvent OnFullyMarked_Cosmetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnGlyphEvent OnStartTeleport_Cosmetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnGlyphEvent OnPostTeleport_Cosmetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnGlyphEvent OnSurvivorEnteredRange_Cosmetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnGlyphEvent OnHasLineOfSight_Cosmetic;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _gracePeriodDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _removeMarkedProgressDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _exposedStatusEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _markTimeNeeded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exposedStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minimumTeleportationDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _checkLineOfSightDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _movementRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _teleportDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_MarkedProgress, Transient, meta=(AllowPrivateAccess=true))
	FSpeedBasedNetSyncedValue _markedProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsPinkGlyphActive, meta=(AllowPrivateAccess=true))
	bool _isPinkGlyphActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsMarking, meta=(AllowPrivateAccess=true))
	bool _isMarking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HasLineOfSightToSurvivor, meta=(AllowPrivateAccess=true))
	bool _hasLineOfSightToSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UTileSpawnPoint*> _teleportPoints;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_MarkedProgress();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsPinkGlyphActive() const;

	UFUNCTION(BlueprintCallable)
	void OnRep_IsMarking() const;

	UFUNCTION(BlueprintCallable)
	void OnRep_HasLineOfSightToSurvivor() const;

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TeleportGlyph(const FVector& location);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartGlyphPreTeleport();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_IsFullyMarkedSurvivor();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_EnterGlyphRange();

public:
	UFUNCTION(BlueprintPure)
	bool IsMarking() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_TeleportGlyph();

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorInMovementRangeChanged(const bool inRange);

	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, const AActor* trackedActor);

	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPinkGlyphComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPinkGlyphComponent) { return 0; }
