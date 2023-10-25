#pragma once

#include "CoreMinimal.h"
#include "SingleModifierCondition.h"
#include "NotModifierCondition.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UNotModifierCondition : public USingleModifierCondition
{
	GENERATED_BODY()

public:
	UNotModifierCondition();
};

FORCEINLINE uint32 GetTypeHash(const UNotModifierCondition) { return 0; }
