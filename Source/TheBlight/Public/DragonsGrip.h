#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "DBDTunableRowHandle.h"
#include "DragonsGrip.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDragonsGrip : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _kickedGenerator;

	UPROPERTY(EditAnywhere)
	float _activationDuration;

	UPROPERTY(EditAnywhere)
	float _cooldownDuration;

	UPROPERTY(EditAnywhere)
	float _exposedEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _onlyExposeFirstSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _loudNoiseRange;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnRevealSurvivor(ADBDPlayer* instigator);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnRevealSurvivor(ADBDPlayer* survivor);

public:
	UFUNCTION(BlueprintPure)
	float GetExposedEffectDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetActivationDurationAtLevel() const;

public:
	UDragonsGrip();
};

FORCEINLINE uint32 GetTypeHash(const UDragonsGrip) { return 0; }
