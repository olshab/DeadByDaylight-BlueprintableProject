#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K28Power_17.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K28Power_17 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _survivorImposedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _statusEffectDuration;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroComplete();

public:
	UAddon_K28Power_17();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K28Power_17) { return 0; }
