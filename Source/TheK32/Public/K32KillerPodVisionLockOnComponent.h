#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K32KillerPodVisionLockOnComponent.generated.h"

class ACamperPlayer;
class AK32Power;
class AK32KillerPod;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerPodVisionLockOnComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lineOfSightTraceSphereSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _lockOnScreenCoveragePercentageY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _autoDetectSurvivorRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _lockOnRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _lingerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _teleportLockOnTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _assimilationLockOnTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _cooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _antiCampLockOnRateMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _survivorProjectileTargetSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _traceProfile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _feetOffsetMultiplier;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AK32Power* _power;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetSurvivorBeingLockedOn(ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_LaunchAssimilationProjectile(ACamperPlayer* targetSurvivor, AK32KillerPod* currentPod);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ShootPodProjectileAtSurvivor(const AK32KillerPod* originKillerPod, ACamperPlayer* targetSurvivor);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShootPodProjectileAtSurvivor(const AK32KillerPod* currentPod, ACamperPlayer* targetSurvivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_OnCooldownStarted();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_OnCooldownEnded();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_IsChargingChanged(const bool isCharging);

public:
	UK32KillerPodVisionLockOnComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerPodVisionLockOnComponent) { return 0; }
