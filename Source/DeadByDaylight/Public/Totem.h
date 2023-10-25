#pragma once

#include "CoreMinimal.h"
#include "AIPointOfInterestTargetInterface.h"
#include "Interactable.h"
#include "ETotemState.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "Totem.generated.h"

class UChargeableInteractionDefinition;
class ATotem;
class UBlockableComponent;
class ADBDPlayer;
class USceneComponent;
class UTotemBoundPerk;
class UGameplayTagContainerComponent;
class UActivatorComponent;
class UAIPerceptionStimuliSourceComponent;
class ULocalPlayerTrackerComponent;
class UTotemOutlineUpdateStrategy;
class UInteractor;
class UAkComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ATotem : public AInteractable, public IAIPointOfInterestTargetInterface
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBindingDelegate);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FBindingDelegate OnTotemBound;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _boonAuraRevealColor;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UTotemBoundPerk*> _boundPerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TotemState, Transient, meta=(AllowPrivateAccess=true))
	ETotemState _totemState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseBoonTotemBlessingRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseBoonTotemAuraRevealRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBlockableComponent* _totemBlockableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UActivatorComponent* _activatorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UGameplayTagContainerComponent* _objectState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _interactionsAttachPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTotemOutlineUpdateStrategy* _totemOutlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _canBeBoundToBoonPerk;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnUnblockTotemCosmetic(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTotemStateChanged(const ETotemState oldTotemState, const ETotemState newTotemState);

private:
	UFUNCTION(BlueprintCallable)
	void OnTotemBlockChanged();

	UFUNCTION(BlueprintCallable)
	void OnRep_TotemState(const ETotemState oldTotemState);

	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCleanseTotem(ATotem* totem, const ETotemState oldTotemState);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnBlockTotemCosmetic(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintPure)
	bool IsTotemBlockedForPlayer(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsBoundToPerk() const;

	UFUNCTION(BlueprintPure)
	ETotemState GetTotemState() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UInteractor* GetMainInteractor() const;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetCleanseTotemInteraction() const;

	UFUNCTION(BlueprintPure)
	float GetBoonTotemBlessingRange() const;

	UFUNCTION(BlueprintPure)
	float GetBoonTotemAuraRevealRange() const;

	UFUNCTION(BlueprintPure)
	FLinearColor GetBoonAuraRevealColor() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetBlessTotemInteraction() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UAkComponent* GetAkAudioComponent() const;

	UFUNCTION(BlueprintCallable)
	void Authority_UnbindFromPerk(UTotemBoundPerk* perk);

	UFUNCTION(BlueprintCallable)
	void Authority_UnbindFromAllPerks();

	UFUNCTION(BlueprintCallable)
	void Authority_Cleanse();

	UFUNCTION(BlueprintCallable)
	void Authority_BindToPerk(UTotemBoundPerk* perk);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ATotem();
};

FORCEINLINE uint32 GetTypeHash(const ATotem) { return 0; }
