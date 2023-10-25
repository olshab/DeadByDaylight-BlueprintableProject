#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "EHudScreenIndicatorType.h"
#include "StatusEffect.h"
#include "K33SurvivorDetectedFromTunnelStatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33SurvivorDetectedFromTunnelStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeBetweenFootsteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EHudScreenIndicatorType _offscreenIndicatorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _offscreenIndicatorMinVisibleDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _offscreenIndicatorLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _indicatorLerpMultiplierSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _aboveKillerHeadRange;

public:
	UK33SurvivorDetectedFromTunnelStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK33SurvivorDetectedFromTunnelStatusEffect) { return 0; }
