#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InitOnSpawnDelegate.h"
#include "OnSetSpawnObjectDelegate.h"
#include "GameFramework/Actor.h"
#include "OnLevelLoadedDelegate.h"
#include "OnAllTileSpawnedDelegate.h"
#include "TileRandomizerData.h"
#include "Tile2.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ATile2 : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRandomStream SharedTileRandomizer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLevelLoadedDelegate OnLevelLoaded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSetSpawnObjectDelegate OnSetSpawnObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAllTileSpawnedDelegate OnAllTileSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FInitOnSpawnDelegate InitOnSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableRandomizer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RandomizerSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTileRandomizerData> Randomizers;

public:
	ATile2();
};

FORCEINLINE uint32 GetTypeHash(const ATile2) { return 0; }
