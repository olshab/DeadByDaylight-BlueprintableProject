#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "HoneyLocustThornsAddon.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHoneyLocustThornsAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _mangledStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _mangledEffectLifetime;

public:
	UHoneyLocustThornsAddon();
};

FORCEINLINE uint32 GetTypeHash(const UHoneyLocustThornsAddon) { return 0; }
