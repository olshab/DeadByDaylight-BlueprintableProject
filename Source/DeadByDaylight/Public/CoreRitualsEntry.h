#pragma once

#include "CoreMinimal.h"
#include "CoreRitualsDifficulty.h"
#include "CoreRitualsEntry.generated.h"

USTRUCT(BlueprintType)
struct FCoreRitualsEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCoreRitualsDifficulty> Difficulty;

public:
	DEADBYDAYLIGHT_API FCoreRitualsEntry();
};

FORCEINLINE uint32 GetTypeHash(const FCoreRitualsEntry) { return 0; }
