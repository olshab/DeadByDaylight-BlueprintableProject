#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualSetArray.h"
#include "AtlantaRitualContainer.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FAtlantaRitualSetArray> RitualsMap;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualContainer();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualContainer) { return 0; }
