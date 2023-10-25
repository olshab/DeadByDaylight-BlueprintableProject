#pragma once

#include "CoreMinimal.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "SpecialBehaviourInteractable.h"
#include "EAllowedPlayerType.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "Glyph.generated.h"

class ADBDPlayer;
class UDBDOutlineComponent;
class UInteractor;
class UChargeableComponent;
class ADBDPlayerState;
class UGlyphInteraction;
class UPrimitiveComponent;
class UNearTrackedActorComponent;
class UStaticMeshComponent;
class AActor;

UCLASS(Blueprintable)
class AGlyph : public ASpecialBehaviourInteractable, public INavAgentInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PlayersWithVisibility, Transient)
	TArray<ADBDPlayer*> _playersWithVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ADBDPlayer*> _oldPlayersWithVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _specialBehaviourId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAllowedPlayerType _allowedPlayerType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _canOnlyBeInteractedOnByOnePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _canBeInteractedAfterQuestCompleted;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ADBDPlayer> lastPlayerToStartInteraction;

	UPROPERTY(EditAnywhere, Replicated, Transient)
	TArray<TWeakObjectPtr<ADBDPlayerState>> _isGlyphActivatedForPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _grantChallengeProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _grantQuestEventProgressOnInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool _isActive;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UGlyphInteraction* _glyphInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UGlyphInteraction* _glyphInteractionKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _glyphInteractionChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _glyphInteractionChargeableKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _glyphInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UNearTrackedActorComponent* _nearTrackedActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _glyphInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _glyphMesh;

	UPROPERTY(EditAnywhere)
	FGameplayTag _associatedSurvivorScoreEvent;

	UPROPERTY(EditAnywhere)
	FGameplayTag _associatedKillerScoreEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isScoreRewardExponentialForMultipleGlyphs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _glyphInteractionSecondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _glyphInteractionSecondsToChargeKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _glyphDetectionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _auraColorWhileInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _playersThatInteractedWithGlyph;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_PlayersWithVisibility();

public:
	UFUNCTION(BlueprintPure)
	bool IsPlayerOwner(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintPure)
	bool DoesLocalPlayerHaveVisibility();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStoppedInteracting();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGlyphVisibilityChanged(ADBDPlayer* interactingPlayer, bool isVisible);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_TrackPlayerWithBehaviourID(ADBDPlayer* dbdPlayer);

	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, const AActor* trackedActor);

	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroCompleted();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintAuthorityOnly)
	void Authority_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AGlyph();
};

FORCEINLINE uint32 GetTypeHash(const AGlyph) { return 0; }
