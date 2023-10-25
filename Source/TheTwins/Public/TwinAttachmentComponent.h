#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "FastTimer.h"
#include "AnimationMontageDescriptor.h"
#include "Templates/SubclassOf.h"
#include "TwinAttachmentComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;
class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinAttachmentComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AttachedPlayer, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _attachedPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _gateBlockerEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _graspBrokenEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _graspIncapacitatedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _graspObliviousEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _graspKillerInstinctEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _gateBlockerStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _hasBeenDetachedBySurvivorDamageChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _cantEscapeByGateLingerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, FFastTimer> _escapeBlockerLingerTimers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _notCancelableInteractionTags;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_AttachedPlayer(ADBDPlayer* oldAttachedPlayer);

	UFUNCTION(BlueprintCallable)
	void OnMoriMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnAttachedSurvivorDamageStateChanged(const ECamperDamageState oldState, const ECamperDamageState newState);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_QuickDestroyTwin();

public:
	UFUNCTION(BlueprintPure)
	bool IsAttachedToSurvivor() const;

	UFUNCTION(BlueprintPure)
	bool IsAttachedToSister() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinDetachedFromSurvivor(ADBDPlayer* survivor, ADBDPlayer* brother);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinDetachedFromSister(ADBDPlayer* sister, ADBDPlayer* brother);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinAttachedToSurvivor(ADBDPlayer* survivor, ADBDPlayer* brother);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinAttachedToSister(ADBDPlayer* sister, ADBDPlayer* brother, bool isFirstAttachment);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnRemoveTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTwinAttachmentComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinAttachmentComponent) { return 0; }
