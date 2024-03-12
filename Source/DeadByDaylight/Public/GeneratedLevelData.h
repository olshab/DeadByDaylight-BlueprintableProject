#pragma once

#include "CoreMinimal.h"
#include "ManagedGameplayElementData.h"
#include "ESurvivorGrouping.h"
#include "ArrayOfSceneComponent.h"
#include "Dependency.h"
#include "ForceSpawnTileData.h"
#include "GeneratedLevelData.generated.h"

class USceneComponent;
class AActor;

USTRUCT(BlueprintType)
struct FGeneratedLevelData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UsedPaperTileMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PremadeMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StreamRelatedSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AvailableEscapeCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AvailableSurvivorItemCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESurvivorGrouping GroupingType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	USceneComponent* KillerSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> SurvivorSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> InteractableElementsSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> KillerItemsSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int32> SpecialBehaviourRequestCounts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FArrayOfSceneComponent> SpecialBehaviourSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FArrayOfSceneComponent> SpecialBehaviourActorSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> SearchableSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> HexSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> KillerLairSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> HatchSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> MainBuildingHatchSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> ShackHatchSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> BreakableWallSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> EscapeSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FManagedGameplayElementData BookshelfManagedGameplayElementData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FManagedGameplayElementData MeatHookManagedGameplayElementData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDependency> LevelDependencies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDependency> LateLevelDependencies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> FixedMapTileIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> FixedMapOrphanSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> FinisherMoriSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> SteamPipeSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> SteamPipeButtonSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> BasementSeanceSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SpecialEventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseForcedMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsePremadeMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GenerationLogs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GenerationErrors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GenerationPlayerCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FForceSpawnTileData> ForceSpawnTileData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> LevelLightings;

public:
	DEADBYDAYLIGHT_API FGeneratedLevelData();
};

FORCEINLINE uint32 GetTypeHash(const FGeneratedLevelData) { return 0; }
