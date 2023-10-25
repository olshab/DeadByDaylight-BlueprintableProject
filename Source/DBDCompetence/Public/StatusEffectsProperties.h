#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectsProperties.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FStatusEffectsProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> StatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CustomParam;

public:
	DBDCOMPETENCE_API FStatusEffectsProperties();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectsProperties) { return 0; }
