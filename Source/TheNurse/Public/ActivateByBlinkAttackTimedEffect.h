#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ActivateByBlinkAttackTimedEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UActivateByBlinkAttackTimedEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _activationDuration;

public:
	UActivateByBlinkAttackTimedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UActivateByBlinkAttackTimedEffect) { return 0; }
