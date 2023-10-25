#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "AuthoritativeActorPoolComponent.h"
#include "K32KillerPodPool.generated.h"

class AActor;
class AK32KillerPod;
class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerPodPool : public UAuthoritativeActorPoolComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _availableAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _lastControlledPodLingerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _destroyPodDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _initialDestroyPodDelay;

private:
	UPROPERTY(EditAnywhere, Replicated)
	TWeakObjectPtr<AK32KillerPod> _controlledPod;

private:
	UFUNCTION(BlueprintCallable)
	void OnLingeringLastControlledPodExpired();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnKillerPodCreated(AActor* actor);

	UFUNCTION(BlueprintCallable)
	void OnKillerPodAcquiredChanged(const bool isAcquired);

	UFUNCTION(BlueprintCallable)
	void Authority_OnDestroyPodDelayTimerDone(ADBDPlayer* launchingSurvivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK32KillerPodPool();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerPodPool) { return 0; }
