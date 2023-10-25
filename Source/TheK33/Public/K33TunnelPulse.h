#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolableActor.h"
#include "K33TunnelPulse.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class THEK33_API AK33TunnelPulse : public AActor, public IPoolableActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lastPulseForwardOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lastPulseUpOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _sideOffsetCurveMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _firstTunnelBlockSideOffsetCurveMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _lastTunnelBlockSideOffsetCurveMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sideOffsetSize;

protected:
	UFUNCTION(BlueprintPure)
	float Cosmetic_GetFadeOutPercentage() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DeactivatePulse();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivatePulse(int32 idInPulseWave);

public:
	AK33TunnelPulse();
};

FORCEINLINE uint32 GetTypeHash(const AK33TunnelPulse) { return 0; }
