#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaRitualEvaluatorBase.generated.h"

UCLASS(Blueprintable)
class UAtlantaRitualEvaluatorBase : public UObject
{
	GENERATED_BODY()

public:
	UAtlantaRitualEvaluatorBase();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaRitualEvaluatorBase) { return 0; }
