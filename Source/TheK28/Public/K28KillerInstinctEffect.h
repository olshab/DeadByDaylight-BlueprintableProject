#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K28KillerInstinctEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28KillerInstinctEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _secondsToLinger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceToApplyRemnantTeleportKillerInstinct;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _lingeringEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _lingeringEffect;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_OnKillerInstinctApplicableChanged(bool active);

public:
	UK28KillerInstinctEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerInstinctEffect) { return 0; }
