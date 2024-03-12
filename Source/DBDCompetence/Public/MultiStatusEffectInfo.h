#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "EMultiImposeEffectTo.h"
#include "MultiStatusEffectInfo.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FMultiStatusEffectInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag EventTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RequireEventInstigatorToMatchAddonOwnerToImposeStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RequireEventTargetToMatchAddonOwnerToImposeStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StatusEffectLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CustomParamValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMultiImposeEffectTo ImposeEffectTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> StatusEffect;

public:
	DBDCOMPETENCE_API FMultiStatusEffectInfo();
};

FORCEINLINE uint32 GetTypeHash(const FMultiStatusEffectInfo) { return 0; }
