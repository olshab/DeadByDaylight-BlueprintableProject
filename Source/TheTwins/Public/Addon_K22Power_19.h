#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K22Power_19.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_19 : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _undetectableDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _undetectableEffectClass;

public:
	UAddon_K22Power_19();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_19) { return 0; }
