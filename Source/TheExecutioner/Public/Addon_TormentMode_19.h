#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_TormentMode_19.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_TormentMode_19 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _undetectableInTormentTrailLingeringStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lingerDuration;

public:
	UAddon_TormentMode_19();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TormentMode_19) { return 0; }
