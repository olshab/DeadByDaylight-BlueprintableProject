#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "GameEventData.h"
#include "K35KillerShootAreaBlastTravelProjectileChargeableInteractionDefinition.generated.h"

class UCurveFloat;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK35KillerShootAreaBlastTravelProjectileChargeableInteractionDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _secondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _secondsCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gracePeriodPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _improvedNavigationSpeedCurve;

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintCallable)
	void OnChargeComplete();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_UpdateLastTimeLaunched();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CompleteCooldown();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCooldownComplete(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeComplete();

private:
	UFUNCTION()
	void Authority_OnKillerTeleportPointSpawn(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UK35KillerShootAreaBlastTravelProjectileChargeableInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerShootAreaBlastTravelProjectileChargeableInteractionDefinition) { return 0; }
