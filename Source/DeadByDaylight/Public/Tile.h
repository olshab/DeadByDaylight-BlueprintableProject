#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBasementType.h"
#include "UObject/NoExportTypes.h"
#include "EPathType.h"
#include "EscapeStrategyType.h"
#include "EQuadrantSpawnType.h"
#include "ETileType.h"
#include "EDensity.h"
#include "Tile.generated.h"

class UTileSpawnPoint;
class UActorSpawner;
class UObjectRandomizer;
class UActorVariationSpawner;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ATile : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RerunConstructionScript;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinimumSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DiagonalSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TypeSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Dimension;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EscapeStrategyType> AvailableEscapeTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETileType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDensity Density;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPathType Path;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Number;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PlaceHolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Replacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnPriorityTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Coord;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EQuadrantSpawnType QuadrantSpawnType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBasementType BasementType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UTileSpawnPoint*> SpawnPointsCache;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UObjectRandomizer*> ObjectRandomizersCache;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UActorSpawner*> ActorSpawnersCache;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UActorVariationSpawner*> ActorVariationSpawnersCache;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRandomStream SharedTileRandomizer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOutOfWorldTile;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Initialized, Transient)
	bool _initialized;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSetSpawnObject(UTileSpawnPoint* tileSpawnPoint, AActor* spawnedObject);

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_Initialized(bool oldValue);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAllTileSpawned();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitOnSpawned();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ATile();
};

FORCEINLINE uint32 GetTypeHash(const ATile) { return 0; }
