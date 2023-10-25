#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ProceduralGenerationAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FProceduralGenerationAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GenerationSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MapSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Procedural_MeatLocker_Small;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Procedural_MeatLocker_Big;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Procedural_Searchable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Procedural_EdgeObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Procedural_LivingWorldObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Procedural_Hatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Procedural_BookShelves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Procedural_BreakableWalls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Procedural_Totems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Procedural_QuadrantSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletProceduralMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletProceduralMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletProcedural;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletProceduralSetCount;

	UPROPERTY(EditAnywhere)
	uint32 PalletGenerationId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PalletGeneric;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KillerSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SurvivorSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HookSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseFixedMaps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NavmeshGenerationTime;

public:
	DBDANALYTICS_API FProceduralGenerationAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FProceduralGenerationAnalytics) { return 0; }
