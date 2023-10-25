#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualSetIndex.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualSetIndex
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ritualType;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualSetIndex();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualSetIndex) { return 0; }
