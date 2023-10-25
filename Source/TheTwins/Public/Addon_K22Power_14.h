#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K22Power_14.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_14 : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _brokenStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _brokenDuration;

public:
	UAddon_K22Power_14();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_14) { return 0; }
