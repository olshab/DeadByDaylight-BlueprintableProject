#pragma once

#include "CoreMinimal.h"
#include "LTEData.generated.h"

USTRUCT(BlueprintType)
struct FLTEData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameModeQueue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IncentiveBonus;

public:
	DEADBYDAYLIGHT_API FLTEData();
};

FORCEINLINE uint32 GetTypeHash(const FLTEData) { return 0; }
