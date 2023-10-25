#pragma once

#include "CoreMinimal.h"
#include "EChainHuntState.h"
#include "ChainHuntStateData.generated.h"

USTRUCT(BlueprintType)
struct FChainHuntStateData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CompletionPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EChainHuntState ChainHuntState;

public:
	THEK25_API FChainHuntStateData();
};

FORCEINLINE uint32 GetTypeHash(const FChainHuntStateData) { return 0; }
