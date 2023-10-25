#pragma once

#include "CoreMinimal.h"
#include "FK26AttachedCrowRemovalReason.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K26AttachmentStatus.h"
#include "GameEventData.h"
#include "ECamperDamageState.h"
#include "K26AttachedCrow.generated.h"

class ASlasherPlayer;
class USceneComponent;
class UK26PowerOutlineUpdateStrategy;
class AK26AttachedCrow;
class UStaticMeshComponent;
class ACamperPlayer;
class UK26PowerStatusHandlerComponent;
class UDBDOutlineComponent;

UCLASS(Blueprintable)
class AK26AttachedCrow : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _lingerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _infectionDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _infectRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _visualStaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26PowerStatusHandlerComponent* _statusHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _authority_isInfecting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AttachmentStatus, meta=(AllowPrivateAccess=true))
	FK26AttachmentStatus _attachmentStatus;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_AttachmentStatus();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnStopDetaching();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnStartDetaching();

	UFUNCTION(BlueprintCallable)
	void HideOutline();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStopDetaching();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartDetaching();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCrowAttached();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAuraShown();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAuraHidden();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAttachedCrowRemoved(FK26AttachedCrowRemovalReason removalReason);

private:
	UFUNCTION()
	void Authority_OnSurvivorWasUnhooked(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorStatusIndicatorSet(const ACamperPlayer* survivor, AK26AttachedCrow* attachedCrow);

	UFUNCTION()
	void Authority_OnSurvivorExitLocker(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorDroppedEnd();

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorAdded(ACamperPlayer* survivor);

	UFUNCTION()
	void Authority_OnPlayerLeftGame(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnOtherSurvivorPerkFlagsChanged(FGameplayTag gameplayTag, bool isAdded);

	UFUNCTION(BlueprintCallable)
	void Authority_OnOtherSurvivorGuidedActionChanged();

	UFUNCTION(BlueprintCallable)
	void Authority_OnOtherSurvivorDamageStateChanged(ECamperDamageState before, ECamperDamageState after);

	UFUNCTION(BlueprintCallable)
	void Authority_OnOtherAttachedCrowRemoved();

	UFUNCTION(BlueprintCallable)
	void Authority_OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void Authority_OnIsWithinOtherSurvivorRangeChanged(AActor* survivorActor, const bool isInRange);

	UFUNCTION(BlueprintCallable)
	void Authority_DeactivateInfection();

	UFUNCTION(BlueprintCallable)
	void Authority_ActivateInfection();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK26AttachedCrow();
};

FORCEINLINE uint32 GetTypeHash(const AK26AttachedCrow) { return 0; }
