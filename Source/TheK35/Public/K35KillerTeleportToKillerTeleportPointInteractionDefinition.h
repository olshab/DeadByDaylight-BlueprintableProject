#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "UObject/NoExportTypes.h"
#include "K35KillerTeleportToKillerTeleportPointInteractionDefinition.generated.h"

class ACamperPlayer;
class AK35KillerTeleportPoint;
class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK35KillerTeleportToKillerTeleportPointInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _addon20SurvivorNearDecoyOrKillerTeleportRangeDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _teleportDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _wakeUpTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _killerCollisionIgnoredLingerTime;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetTeleportPoint(AK35KillerTeleportPoint* killerTeleportPoint);

	UFUNCTION(BlueprintCallable)
	void OnTeleportationComplete(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnKillerCollisionIgnoreLingerComplete(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetTeleportPoint(AK35KillerTeleportPoint* killerTeleportPoint);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnTeleportStarted(ADBDPlayer* player, const FVector& teleportStartLocation, const FVector& teleportEndLocation, AK35KillerTeleportPoint* targetTeleportPoint);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnTeleportEnded(ADBDPlayer* player, const FVector& teleportEndLocation);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportStart(const FVector& teleportStartLocation, const FVector& teleportEndLocation, const AK35KillerTeleportPoint* teleportPoint, const ACamperPlayer* interactingSurvivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportEnd(const FVector& teleportEndLocation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorScream(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_EnableTeleportVignette(ADBDPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DisableTeleportVignette(ADBDPlayer* killer);

public:
	UK35KillerTeleportToKillerTeleportPointInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerTeleportToKillerTeleportPointInteractionDefinition) { return 0; }
