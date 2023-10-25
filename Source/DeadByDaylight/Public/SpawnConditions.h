#pragma once

#include "CoreMinimal.h"
#include "SpawnConditions.generated.h"

USTRUCT(BlueprintType)
struct FSpawnConditions
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinProximity;

public:
	DEADBYDAYLIGHT_API FSpawnConditions();
};

FORCEINLINE uint32 GetTypeHash(const FSpawnConditions) { return 0; }
