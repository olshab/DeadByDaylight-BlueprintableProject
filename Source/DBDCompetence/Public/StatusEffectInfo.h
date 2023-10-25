#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EImposeEffectTo.h"
#include "StatusEffectInfo.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FStatusEffectInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StatusEffectLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CustomParamValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EImposeEffectTo ImposeEffectTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> StatusEffect;

public:
	DBDCOMPETENCE_API FStatusEffectInfo();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectInfo) { return 0; }
