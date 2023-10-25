#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "InK32PodZoneLingeringEffect.generated.h"

class AK32KillerPod;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UInK32PodZoneLingeringEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AK32KillerPod*> _podsInRange;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnKillerPodDisabledChanged(const bool isDisabled);

	UFUNCTION(BlueprintCallable)
	void Authority_OnKillerPodAcquiredChanged(const bool isAcquired);

public:
	UInK32PodZoneLingeringEffect();
};

FORCEINLINE uint32 GetTypeHash(const UInK32PodZoneLingeringEffect) { return 0; }
