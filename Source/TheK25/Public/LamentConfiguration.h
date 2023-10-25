#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "AkObservedPlayerSoundLoop.h"
#include "ELamentConfigurationState.h"
#include "EAttachToSocketNameEnum.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "GameEventData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "LamentConfiguration.generated.h"

class USpherePlayerOverlapComponent;
class ULamentConfigurationSpawnStrategy;
class UK25CollectLamentConfigurationInteraction;
class UDBDOutlineComponent;
class UInteractor;
class UMaterialHelper;
class UAnimationMontageSlave;
class ULamentConfigurationOutlineStrategy;
class ULamentConfigurationChainHuntComponent;
class UMontagePlayer;
class AAnimationFollowerActor;
class AK25LamentConfigurationTeleportIndicator;
class ACamperPlayer;
class UBoxComponent;
class ASlasherPlayer;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ALamentConfiguration : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USpherePlayerOverlapComponent* _interactable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UInteractor* _collectableInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK25CollectLamentConfigurationInteraction* _survivorCollectItemInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK25CollectLamentConfigurationInteraction* _killerCollectItemInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMaterialHelper* _materialHelper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	ULamentConfigurationOutlineStrategy* _outlineStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	ULamentConfigurationSpawnStrategy* _spawnStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	ULamentConfigurationChainHuntComponent* _chainHuntComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _dotProductMinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachToSocketNameEnum _survivorAttachmentSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachToSocketNameEnum _killerAttachmentSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UAnimationMontageSlave* _montageFollower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AAnimationFollowerActor> _chainAnimationActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK25LamentConfigurationTeleportIndicator> _lamentConfigurationTeleportIndicatorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _chainAnimationFollowerAttachmentSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkObservedPlayerSoundLoop _possessionSoundLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _respawnTimeAfterLamentConfigurationSolved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _respawnTimeAfterKillerPickUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _respawnTimeAfterSurvivorFreeBySelf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _respawnTimeAfterSurvivorFreeByAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _numberChainsToLaunchUponKillerPickUpLamentConfiguration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _hostageInteractionTime;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ELamentConfigurationState _localLamentConfigurationState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_LamentConfigurationState, Transient, meta=(AllowPrivateAccess=true))
	ELamentConfigurationState _lamentconfigurationState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AAnimationFollowerActor* _chainAnimationActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SurvivorHeldHostage, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _survivorHeldHostage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _standingOnLamentConfigurationCollisionChecker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeAllowedToStandOnCubeBeforeTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _solvedLamentConfigurationDropDistanceToCollectorCentimeters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _failedLamentConfigurationSolveDropDistanceToCollectorCentimeters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _solved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _releasedByAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK25LamentConfigurationTeleportIndicator* _lamentConfigurationTeleportIndicator;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TriggerKillerPickUpSFX(const TArray<ACamperPlayer*>& affectedSurvivors);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SurvivorHeldHostage(ACamperPlayer* oldSurvivorHeldHostage);

	UFUNCTION(BlueprintCallable)
	void OnRep_LamentConfigurationState();

	UFUNCTION()
	void OnCamperEscaped(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TriggerSolvedSFX();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TriggerKillerPickUpSFX(const TArray<ACamperPlayer*>& affectedSurvivors);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DownedSurvivorHoldingLamentConfiguration(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CorrectLamentConfigurationPosition(const FVector& newPosition);

public:
	UFUNCTION(BlueprintPure)
	float GetChainHuntProgressPercentage() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerSurvivorPickUpSFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerSpawnedSFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerSolvedSFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerRespawnDuringChainHuntSFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerDisappearsSFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration(ASlasherPlayer* killer, ACamperPlayer* survivorDowned);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHoldingSurvivorHostageStart(float hostageDuration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHoldingSurvivorHostageEnd(bool hasEndedThroughKillerAttack);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainHuntStartedEffects();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainHuntEndedEffects();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainHuntChargeStart(float chargeTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainHuntChargeEnd();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_EndSolvingCube(bool hasBeenSolved);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_BeginSolvingCube();

	UFUNCTION(BlueprintCallable)
	void Authority_RespawnLamentConfiguration(bool triggerChainHuntUponSpawning);

private:
	UFUNCTION()
	void Authority_OnSurvivorHitByControlledProjectile(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* other, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroCompletedOrLevelReadyToPlay();

	UFUNCTION()
	void Authority_OnGameEnded(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnEndGameOver(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ALamentConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const ALamentConfiguration) { return 0; }
