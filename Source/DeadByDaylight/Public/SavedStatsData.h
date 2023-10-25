#pragma once

#include "CoreMinimal.h"
#include "SavedStatsData.generated.h"

USTRUCT(BlueprintType)
struct FSavedStatsData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 Version;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

public:
	DEADBYDAYLIGHT_API FSavedStatsData();
};

FORCEINLINE uint32 GetTypeHash(const FSavedStatsData) { return 0; }
