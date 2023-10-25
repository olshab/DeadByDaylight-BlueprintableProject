#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualSet.h"
#include "AtlantaRitualSetArray.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualSetArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAtlantaRitualSet> rituals;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualSetArray();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualSetArray) { return 0; }
