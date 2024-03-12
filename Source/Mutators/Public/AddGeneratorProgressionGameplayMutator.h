#pragma once

#include "CoreMinimal.h"
#include "GameplayMutator.h"
#include "AddGeneratorProgressionGameplayMutator.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddGeneratorProgressionGameplayMutator : public UGameplayMutator
{
	GENERATED_BODY()

public:
	UAddGeneratorProgressionGameplayMutator();
};

FORCEINLINE uint32 GetTypeHash(const UAddGeneratorProgressionGameplayMutator) { return 0; }
