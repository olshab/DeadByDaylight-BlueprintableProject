#pragma once

#include "CoreMinimal.h"
#include "PalletPulldownBlockable.h"
#include "Interactable.h"
#include "Engine/EngineTypes.h"
#include "EPalletState.h"
#include "UObject/NoExportTypes.h"
#include "EPalletStunZoneSideStrategy.h"
#include "PalletPushSettings.h"
#include "Pallet.generated.h"

class AActor;
class UInteractionDefinition;
class UDBDNavEvadeLoopComponent;
class ADBDPlayer;
class UPalletPulldownBlockerComponent;
class UBoxComponent;
class UPrimitiveComponent;
class ACamperPlayer;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API APallet : public AInteractable, public IPalletPulldownBlockable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PalletDownEvadeDoorFrontPointOffset;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPalletState _state;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isPendingDestruction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIllusionaryPalletDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDestroyedByEntity;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _destroyLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _destroyRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _pushBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _downedPalletCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _upPalletCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxDotproductThresholdForPulldownAccross;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fallDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _stunBoxLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _stunBoxRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<AActor*> _stunnedActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _playerExecutingPulldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FPalletPushSettings _pushSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavEvadeLoopComponent* _navEvadeLoopComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPalletPulldownBlockerComponent* _palletPulldownBlockerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isDreamPallet;

public:
	UFUNCTION(BlueprintCallable)
	void SetPendingDestruction(bool isPendingDestruction);

protected:
	UFUNCTION(BlueprintCallable)
	void SetPalletState(EPalletState state);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ResetPallet();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PulldownPallet();

	UFUNCTION(BlueprintCallable)
	void PullDown(ADBDPlayer* player, const FPalletPushSettings& pushSettings, const EPalletStunZoneSideStrategy stunZoneSideStrategy);

private:
	UFUNCTION()
	void OnStunOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnPalletStunHit();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPalletPulledUp_BP();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnFallen();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StunActor(AActor* actor, ACamperPlayer* survivor, bool stunBreakPallet);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ResetPallet();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_PulldownPallet();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_EntityExplodePallet(ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	bool IsPulldownBlockedByEntity() const;

	UFUNCTION(BlueprintPure)
	bool IsPendingDestruction() const;

	UFUNCTION(BlueprintPure)
	bool IsDestroyedByEntity() const;

protected:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetPlayerDoingPulldown() const;

public:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USkeletalMeshComponent* GetPalletSkeletalMeshComponent() const;

	UFUNCTION(BlueprintPure)
	bool GetIsPulledDown() const;

	UFUNCTION(BlueprintPure)
	bool GetIsDreamPallet() const;

protected:
	UFUNCTION(BlueprintPure)
	float GetFallDuration() const;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	void GetDestructibleAreaPrimitiveComponents(TArray<UPrimitiveComponent*>& prims) const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ExplodeStunPallet(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ExplodePallet(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EntityExplodePallet(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_PalletPullDownFXImmediateHide();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPalletPulldownBlockedByEntityShow();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPalletPulldownBlockedByEntityHide();

	UFUNCTION(BlueprintPure)
	bool CanPulldown(const ADBDPlayer* player, const FVector& interactionAxis, const bool isStationary) const;

private:
	UFUNCTION()
	void Authority_OnOverlapPushBox(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	APallet();
};

FORCEINLINE uint32 GetTypeHash(const APallet) { return 0; }
