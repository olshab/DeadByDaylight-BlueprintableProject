#pragma once

#include "CoreMinimal.h"
#include "SpectatingActorLinker.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "K32KillerPodVisionController.generated.h"

class AK32KillerPod;
class ASlasherPlayer;
class UInteractionDefinition;

UCLASS(Blueprintable)
class AK32KillerPodVisionController : public AActor, public ISpectatingActorLinker
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _allowedInteractionSemancticsWithPodVision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _allowedPodVisionInteractionSemanctic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _podViewPitchMinimum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _podViewPitchMaximum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _collisionDisableTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _observerRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minTimeBetweenCameraRotationUpdateRPC;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HasVisionFromKillerPod, meta=(AllowPrivateAccess=true))
	bool _hasVisionFromKillerPod;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_TakeControlOfPod(AK32KillerPod* killerPodToBeControlled);

	UFUNCTION(BlueprintCallable, Server, Unreliable)
	void Server_SetCameraOrientation(FRotator newOrientation);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_ReleaseControlOfPods();

	UFUNCTION(BlueprintCallable)
	void OnRep_HasVisionFromKillerPod();

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void OnKillerLocallyObservedChanged(const bool isKillerLocallyObserved);

	UFUNCTION(BlueprintCallable)
	void OnInteractionStarted(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable)
	void OnControlledPodUnacquiredFromPool(const bool isAcquired);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetLocationAndRotation(const FVector& location);

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_SetKillerCollisionDisabledForSurvivors(const bool isDisabled);

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_SetCameraOrientation(FRotator newOrientation);

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_OnControlledPodDisabledChanged(const bool isDisabled);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_OnTakingControlOfPod();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_OnReleasingControlOfPod();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_OnCurrentPodDisabledChanged(const bool isDisabled);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnControlledPodDisabledChanged(const bool isDisabled);

	UFUNCTION(BlueprintCallable)
	void Authority_OnCollisionDisableTimerComplete();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32KillerPodVisionController();
};

FORCEINLINE uint32 GetTypeHash(const AK32KillerPodVisionController) { return 0; }
