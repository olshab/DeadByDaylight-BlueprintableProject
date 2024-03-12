#pragma once

#include "CoreMinimal.h"
#include "SlashableInterface.h"
#include "GameFramework/Character.h"
#include "TunableStat.h"
#include "ObjectStateProvider.h"
#include "EZombieState.h"
#include "DynamicGrassEffectorInterface.h"
#include "PushableInterface.h"
#include "EZombieGender.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "EAttackType.h"
#include "FirecrackerEffectData.h"
#include "ZombieCharacter.generated.h"

class UAuthoritativePoolableActorComponent;
class UZombieBlindableComponent;
class USphereComponent;
class UStaticMeshComponent;
class USkeletalMesh;
class UFirecrackerEffectHandlerComponent;
class ASlasherPlayer;
class UChargeableComponent;
class UFlashlightableComponent;
class UGameplayTagContainerComponent;
class UCharacterPositionRecorderComponent;
class UAuthoritativeMovementComponent;
class UOtherCharactersVerticalCollisionsHandler;
class AActor;
class UPrimitiveComponent;
class UFlashlightComponent;

UCLASS(Blueprintable)
class AZombieCharacter : public ACharacter, public IDynamicGrassEffectorInterface, public ISlashableInterface, public IPushableInterface, public IGenericTeamAgentInterface, public IObjectStateProvider
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _zombieWalkSpeed;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativePoolableActorComponent* _poolableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _zombieAttackDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _attackDamageZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ZombieState, meta=(AllowPrivateAccess=true))
	EZombieState _zombieState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _zombieRespawnTimeKilledBySlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _zombieRespawnTimeKilledBySurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FTransform _respawnPositionBehindGate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ZombieGender, meta=(AllowPrivateAccess=true))
	EZombieGender _zombieGender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	USkeletalMesh* _femaleSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FString _audioSwitchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UZombieBlindableComponent* _blindableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _blindingChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFlashlightableComponent* _flashLightableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _zombieStunBaseTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UGameplayTagContainerComponent* _objectState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCharacterPositionRecorderComponent* _positionRecorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeMovementComponent* _authoritativeMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UOtherCharactersVerticalCollisionsHandler* _otherCharactersVerticalCollisionsHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _ignoreActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _zombieStunnedCapsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minFallHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _afterInAirAttackCooldown;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void ZombieKilledByKiller_Cosmetic(EAttackType attackType);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void SetCharacterActive_Cosmetic(const bool value);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnZombieStateChanged_Cosmetic(EZombieState zombieState);

private:
	UFUNCTION(BlueprintCallable)
	void OnSlasherSet(ASlasherPlayer* slasher);

	UFUNCTION(BlueprintCallable)
	void OnRep_ZombieState(EZombieState previousState);

	UFUNCTION(BlueprintCallable)
	void OnRep_ZombieGender();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnFemaleGenderSet_Cosmetic();

private:
	UFUNCTION(BlueprintCallable)
	void OnEndOverlapZombieAttackDetector(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnBeginOverlapZombieAttackDetector(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_ZombieKilledByKillerCosmetic(EAttackType attackType);

public:
	UFUNCTION(BlueprintPure)
	EZombieGender GetZombieGender() const;

	UFUNCTION(BlueprintPure)
	UOtherCharactersVerticalCollisionsHandler* GetOtherCharactersVerticalCollisionsHandler() const;

	UFUNCTION(BlueprintPure)
	UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent() const;

protected:
	UFUNCTION(BlueprintPure)
	FString GetAudioSwitchState() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnZombieStateChanged(EZombieState zombieState);

	UFUNCTION(BlueprintCallable)
	void Authority_OnFlashlightRemoved(const UFlashlightComponent* flashlight);

	UFUNCTION(BlueprintCallable)
	void Authority_OnFlashlightAdded(const UFlashlightComponent* flashlight);

	UFUNCTION(BlueprintCallable)
	void Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData);

	UFUNCTION(BlueprintCallable)
	void Authority_DeactivateZombieAndStartRespawnTimer();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AZombieCharacter();
};

FORCEINLINE uint32 GetTypeHash(const AZombieCharacter) { return 0; }
