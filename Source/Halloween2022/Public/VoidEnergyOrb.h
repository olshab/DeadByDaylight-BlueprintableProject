#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "VoidEnergyOrb.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class AVoidEnergyOrb : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _characterBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeHoverDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeToMoveToTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeBeforeCollectionToPlaySound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minAmplitudeAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxAmplitudeAllowed;

private:
	UFUNCTION(BlueprintCallable)
	void PlaceOrbInQueue();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOrbSpawned(ADBDPlayer* playerGivingOrbTo, const bool isLargeOrb);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOrbDisappearWithoutCollection(const bool isLargeOrb);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOrbDisappearWithCollection(ADBDPlayer* playerGivingOrbTo);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DelayBeforeCollection(ADBDPlayer* playerGivingOrbTo);

public:
	AVoidEnergyOrb();
};

FORCEINLINE uint32 GetTypeHash(const AVoidEnergyOrb) { return 0; }
