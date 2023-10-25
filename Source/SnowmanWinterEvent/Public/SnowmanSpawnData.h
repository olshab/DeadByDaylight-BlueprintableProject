#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnowmanSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FSnowmanSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FRotator SpawnRotation;

public:
	SNOWMANWINTEREVENT_API FSnowmanSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FSnowmanSpawnData) { return 0; }
