#pragma once

#include "CoreMinimal.h"
#include "RankResetStartingPips.generated.h"

USTRUCT(BlueprintType)
struct FRankResetStartingPips
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NewPipAmount;

public:
	DEADBYDAYLIGHT_API FRankResetStartingPips();
};

FORCEINLINE uint32 GetTypeHash(const FRankResetStartingPips) { return 0; }
