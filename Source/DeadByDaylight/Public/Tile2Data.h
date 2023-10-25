#pragma once

#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "ETileType.h"
#include "EDensity.h"
#include "Engine/DataTable.h"
#include "EBasementType.h"
#include "UObject/NoExportTypes.h"
#include "EPathType.h"
#include "EscapeStrategyType.h"
#include "EQuadrantSpawnType.h"
#include "ETileClassType.h"
#include "Tile2Data.generated.h"

USTRUCT(BlueprintType)
struct FTile2Data: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TileName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinimumSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumSpacing;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EGameplayElementType> AvailableGameplayElementTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DiagonalSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TypeSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETileClassType TileClassType;

public:
	DEADBYDAYLIGHT_API FTile2Data();
};

FORCEINLINE uint32 GetTypeHash(const FTile2Data) { return 0; }
