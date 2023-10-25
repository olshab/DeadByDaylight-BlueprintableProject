#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ModifierValueData.generated.h"

USTRUCT(BlueprintType)
struct FModifierValueData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag ModifierTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EstimateWithSemantics;

	UPROPERTY(EditAnywhere)
	FGameplayTag SemanticTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsesItemAddons;

public:
	DBDBOTS_API FModifierValueData();
};

FORCEINLINE uint32 GetTypeHash(const FModifierValueData) { return 0; }
