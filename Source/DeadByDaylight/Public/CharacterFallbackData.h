#pragma once

#include "CoreMinimal.h"
#include "CharacterFallbackData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterFallbackData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DefaultKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DefaultSurvivor;

public:
	DEADBYDAYLIGHT_API FCharacterFallbackData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterFallbackData) { return 0; }
