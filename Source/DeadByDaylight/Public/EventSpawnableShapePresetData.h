#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "EventSpawnableShapePresetData.generated.h"

USTRUCT(BlueprintType)
struct FEventSpawnableShapePresetData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector MinBound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector MaxBound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnPriorityTier;

public:
	DEADBYDAYLIGHT_API FEventSpawnableShapePresetData();
};

FORCEINLINE uint32 GetTypeHash(const FEventSpawnableShapePresetData) { return 0; }
