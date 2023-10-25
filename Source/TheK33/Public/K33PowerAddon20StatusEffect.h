#pragma once

#include "CoreMinimal.h"
#include "ActivatableStatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "K33PowerAddon20StatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33PowerAddon20StatusEffect : public UActivatableStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _effectDuration;

public:
	UK33PowerAddon20StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK33PowerAddon20StatusEffect) { return 0; }
