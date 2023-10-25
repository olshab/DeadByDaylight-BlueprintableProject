#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "TwinBaseKillerInstinctEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinBaseKillerInstinctEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _lullabyRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _lingerDuration;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnInRangeChanged(const bool inRange);

public:
	UTwinBaseKillerInstinctEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTwinBaseKillerInstinctEffect) { return 0; }
