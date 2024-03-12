#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Spring2024StatusEffect.h"
#include "Spring2024KillerStatusEffect.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class USpring2024KillerStatusEffect : public USpring2024StatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _lungeAttackCooldownModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _activationTimerDuration;

public:
	USpring2024KillerStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const USpring2024KillerStatusEffect) { return 0; }
