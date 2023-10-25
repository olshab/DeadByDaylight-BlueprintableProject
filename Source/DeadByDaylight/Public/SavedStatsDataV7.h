#pragma once

#include "CoreMinimal.h"
#include "SavedStatsDataV7.generated.h"

USTRUCT(BlueprintType)
struct FSavedStatsDataV7
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	float Value;

public:
	DEADBYDAYLIGHT_API FSavedStatsDataV7();
};

FORCEINLINE uint32 GetTypeHash(const FSavedStatsDataV7) { return 0; }
