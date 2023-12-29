#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EventSpawnableSpawnRequirements.h"
#include "ETileType.h"
#include "TileEventSpawnerSettingData.generated.h"

USTRUCT(BlueprintType)
struct FTileEventSpawnerSettingData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETileType TileType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsExitGate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinBudget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxBudget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEventSpawnableSpawnRequirements> SpawnRequirementsPerSize;

public:
	DEADBYDAYLIGHT_API FTileEventSpawnerSettingData();
};

FORCEINLINE uint32 GetTypeHash(const FTileEventSpawnerSettingData) { return 0; }
