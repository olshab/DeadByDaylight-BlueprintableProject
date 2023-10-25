#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "TwinLullabyRangeAdditiveEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinLullabyRangeAdditiveEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _defaultTwinLullabyDormantRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _twinLullabyDormantRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _twinLullabyAttachedRange;

public:
	UTwinLullabyRangeAdditiveEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTwinLullabyRangeAdditiveEffect) { return 0; }
