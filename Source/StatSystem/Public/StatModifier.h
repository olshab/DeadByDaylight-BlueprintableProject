#pragma once

#include "CoreMinimal.h"
#include "EModifierOperationStrategy.h"
#include "GameplayTagContainer.h"
#include "EModifierCompoundStrategy.h"
#include "StatModifier.generated.h"

USTRUCT(BlueprintType)
struct FStatModifier
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModifierOperationStrategy OperationStrategy;

	UPROPERTY(EditAnywhere)
	FGameplayTag ModifierTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModifierCompoundStrategy CompoundStrategy;

public:
	STATSYSTEM_API FStatModifier();
};

FORCEINLINE uint32 GetTypeHash(const FStatModifier) { return 0; }
