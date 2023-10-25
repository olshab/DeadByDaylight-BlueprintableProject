#pragma once

#include "CoreMinimal.h"
#include "PlayerFinishStats.generated.h"

USTRUCT(BlueprintType)
struct FPlayerFinishStats
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int8 NumberOfSurvivorsKilledOrSacrificed;

public:
	DEADBYDAYLIGHT_API FPlayerFinishStats();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerFinishStats) { return 0; }
