#pragma once

#include "CoreMinimal.h"
#include "BaseTrap.h"
#include "OnIsTrapSetChanged.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "BearTrap.generated.h"

class UAnimationMontageSlave;
class UBoxPlayerOverlapComponent;
class UMapActorComponent;
class UBoxComponent;
class UPrimitiveComponent;
class UCapsulePlayerOverlapComponent;
class UDBDOutlineComponent;
class USphereComponent;
class UBearTrapOutlineUpdateStrategy;
class UDBDNavModifierComponent;
class UMontagePlayer;
class ASlasherPlayer;
class ADBDPlayer;
class UStatusEffect;
class UInteractor;
class UInteractionDefinition;
class UAnimMontage;
class AActor;
class ACamperPlayer;
class UBearTrapAnimInstance;
class UAkComponent;

UCLASS(Blueprintable)
class ABearTrap : public ABaseTrap
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxPlayerOverlapComponent* _interactionVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCapsulePlayerOverlapComponent* _trapPlayerDetectionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxComponent* _killerSafetyZoneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBearTrapOutlineUpdateStrategy* _outlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMapActorComponent* _mapActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USphereComponent* _mapActorCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USphereComponent* _trapBlocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsTrapSetChanged _onIsTrapSetChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _ownerPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _revealWhileTrappedStatusEffectClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavModifierComponent* _dangerNavModifierComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isTrapperOutOfSafetyZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _maximumAttemptsForSelfUntrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _selfUntrapAttemptsRemaining;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _mainInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _trapSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _trapKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _trappedPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAnimationMontageSlave* _animationMontageSlave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _honingStoneStatusEffect;

public:
	UFUNCTION(BlueprintCallable)
	void TrySetTrappedPlayer(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void SetTrappedPlayerSinceMoved(bool didTrap);

protected:
	UFUNCTION(BlueprintCallable)
	void SetTrappedPlayer(ADBDPlayer* trappedPlayer);

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void PlayMontage(UAnimMontage* montage) const;

private:
	UFUNCTION(BlueprintCallable)
	void OnTrappedPlayerPickedUp(ADBDPlayer* picker);

	UFUNCTION(BlueprintCallable)
	void OnTrapDetectionZoneOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnTrapDetectionZoneOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintCallable)
	void OnSlasherSet(ASlasherPlayer* slasher);

private:
	UFUNCTION(BlueprintCallable)
	void OnSafetyZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay_Implementation();

	UFUNCTION(BlueprintCallable)
	void OnCollectUpdateStart();

	UFUNCTION(BlueprintCallable)
	void OnCollectUpdateEnd();

public:
	UFUNCTION(BlueprintPure)
	bool IsTrapperOutOfSafetyZone() const;

	UFUNCTION(BlueprintCallable)
	void InitializeTrapSurvivorInteraction(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable)
	void InitializeTrapKillerInteraction(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable)
	void InitializeMainInteractor(UInteractor* interactor);

	UFUNCTION(BlueprintPure)
	bool HasTrappedPlayerSinceMoved() const;

	UFUNCTION(BlueprintPure)
	bool HasTrappedPlayer() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetTrappedPlayer() const;

	UFUNCTION(BlueprintPure)
	int32 GetSelfUntrapAttemptsRemaining() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaximumAttemptsForSelfUntrap() const;

	UFUNCTION(BlueprintPure)
	UBearTrapAnimInstance* GetAnimInstance() const;

protected:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UAkComponent* GetAkAudioComponent() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerTrapped(ADBDPlayer* trappedPlayer);

	UFUNCTION(BlueprintCallable)
	void Authority_ImposeRevealAuraEffect(ACamperPlayer* survivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABearTrap();
};

FORCEINLINE uint32 GetTypeHash(const ABearTrap) { return 0; }
