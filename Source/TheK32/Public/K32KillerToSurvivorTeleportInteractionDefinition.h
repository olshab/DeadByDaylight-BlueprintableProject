#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "K32KillerToSurvivorTeleportInteractionDefinition.generated.h"

class ACamperPlayer;
class ADBDPlayer;
class ASlasherPlayer;
class UStatusEffect;
class APallet;
class AK32KillerPod;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerToSurvivorTeleportInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _teleportDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _wakeUpTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _killerCollisionIgnoredLingerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _teleportDurationExtensionThirdPersonAntiCamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _overclockDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _overheatDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _overlockStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _overheatStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _killerSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _secondsOfOverclockPerAssimilatedSurvivor;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetTeleportTarget(ACamperPlayer* survivor, AK32KillerPod* initiatedPod);

	UFUNCTION(BlueprintCallable)
	void OnTeleportationComplete(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnKillerCollisionIngoreLingerComplete(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetTeleportTarget(ACamperPlayer* survivor, const FVector& teleportEndLocation, const FVector& teleportStartLocation, AK32KillerPod* initiatedPod);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnTeleportStarted(ADBDPlayer* player, const FVector& teleportStartLocation, const FVector& teleportEndLocation);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnTeleportEnded(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DestroyPallet(APallet* pallet);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportStart(const FVector& teleportEndLocation, const FVector& teleportStartLocation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_EnableTeleportVignette(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DisableTeleportVignette(ASlasherPlayer* killer);

public:
	UK32KillerToSurvivorTeleportInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerToSurvivorTeleportInteractionDefinition) { return 0; }
