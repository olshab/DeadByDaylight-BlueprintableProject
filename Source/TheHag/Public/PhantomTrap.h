#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "DBDTimer.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "PhantomTrap.generated.h"

class ADBDPlayer;
class USceneComponent;
class UWipeAwayPhantomTrapInteraction;
class UStatusEffect;
class ASlasherPlayer;
class ACamperPlayer;
class UChargeableComponent;
class USphereComponent;
class AActor;
class UTerrorRadiusEmitterComponent;
class UInteractor;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class THEHAG_API APhantomTrap : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _phantomHasCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _silentTrapTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDeactivating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* _slasherOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _slowdownInTrapZoneEffect;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTerrorRadiusEmitterComponent* _terrorRadiusEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _camperOutlineDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lineOfSightTraceMinInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _speedTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _trapLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _triggerZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _survivorSlowdownEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _wipeAwayInteractionChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UWipeAwayPhantomTrapInteraction* _wipeAwayInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _wipeAwayInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _wipeAwayInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _wipeAwayTimeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _hasTrapBeenSetOff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _hasTrapBeenDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isInUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTimer _activeTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isSlasherHere;

private:
	UFUNCTION(BlueprintCallable)
	void SetIsInUse(bool inUse);

protected:
	UFUNCTION(BlueprintCallable)
	void RetrievePerkFlags(const FGameplayTag silentTrapTag, const FGameplayTag phantomCollisionTag);

	UFUNCTION(BlueprintCallable)
	void OnTrapReset();

	UFUNCTION(BlueprintCallable)
	void OnTrapActivated();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DestroyTrap(ACamperPlayer* playerDestroyingTrap);

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsTrapSet() const;

	UFUNCTION(BlueprintPure)
	bool IsTrapDeactivating() const;

	UFUNCTION(BlueprintPure)
	bool IsTrapActive() const;

	UFUNCTION(BlueprintPure)
	bool IsSilentTrigger() const;

protected:
	UFUNCTION(BlueprintCallable)
	void InitializeTerrorRadiusEmitter(ASlasherPlayer* owningSlasher);

public:
	UFUNCTION(BlueprintPure)
	bool HasKillerTeleported() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USceneComponent* GetPhantomTransform() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USkeletalMeshComponent* GetMesh() const;

protected:
	UFUNCTION(BlueprintCallable)
	bool CanActivateTrap(ACamperPlayer* camper, bool isInUse);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_OnTrapDestroyed(ACamperPlayer* playerDestroyingTrap);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_OnTrapActivate(ACamperPlayer* triggerer);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnTriggerZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnTriggerZoneBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintCallable)
	void ActivateSlasher(ASlasherPlayer* slasher);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	APhantomTrap();
};

FORCEINLINE uint32 GetTypeHash(const APhantomTrap) { return 0; }
