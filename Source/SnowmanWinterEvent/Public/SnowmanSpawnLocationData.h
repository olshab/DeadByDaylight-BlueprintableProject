#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnowmanSpawnLocationData.generated.h"

USTRUCT(BlueprintType)
struct FSnowmanSpawnLocationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector OriginLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FVector> NavmeshLocations;

public:
	SNOWMANWINTEREVENT_API FSnowmanSpawnLocationData();
};

FORCEINLINE uint32 GetTypeHash(const FSnowmanSpawnLocationData) { return 0; }
