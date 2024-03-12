#pragma once

#include "CoreMinimal.h"
#include "SeancePerk.h"
#include "Templates/SubclassOf.h"
#include "ImposeStatusEffectSeancePerk.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UImposeStatusEffectSeancePerk : public USeancePerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _effectAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _effectLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _statusEffectClass;

public:
	UImposeStatusEffectSeancePerk();
};

FORCEINLINE uint32 GetTypeHash(const UImposeStatusEffectSeancePerk) { return 0; }
