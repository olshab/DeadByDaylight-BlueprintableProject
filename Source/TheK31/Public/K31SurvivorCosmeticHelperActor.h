#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "DBDTunableRowHandle.h"
#include "K31SurvivorCosmeticHelperActor.generated.h"

class AK31Drone;
class UK31PlayerZoneStatus;

UCLASS(Blueprintable)
class THEK31_API AK31SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK31PlayerZoneStatus* _playerZoneStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _enterActiveZoneCosmeticCooldown;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateLockOnProgress(float currentProgressPercent, bool isFullyLockedOn);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsTrappedByClawTrap(bool isTrapped);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsSurvivorImmuneToDetection(bool isImmuneToDetection, int32 numLockOns);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner(bool isSurvivorDetectedAndVisibleOnScanner);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsOverlappingActiveZoneChanged(bool isOverlappingActiveZone);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsBroadcasting(bool isBroadcasting);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDetectedByDrone(AK31Drone* drone, bool isOnCooldown);

public:
	AK31SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK31SurvivorCosmeticHelperActor) { return 0; }
