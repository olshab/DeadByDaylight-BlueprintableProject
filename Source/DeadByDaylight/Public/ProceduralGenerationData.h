#pragma once

#include "CoreMinimal.h"
#include "KillerItemDependencies.h"
#include "Engine/DataAsset.h"
#include "QuadrantSpawnCategories.h"
#include "SurvivorItemProperties.h"
#include "QuadrantSpawnTypeProperties.h"
#include "ThemeProperties.h"
#include "EscapeStrategyProperty.h"
#include "EscapeTypeObjects.h"
#include "UObject/SoftObjectPtr.h"
#include "GameplayElementsPopulation.h"
#include "ManagedGameplayElementsPopulation.h"
#include "SurvivorGroupingProbability.h"
#include "UObject/NoExportTypes.h"
#include "SpecialBehaviourPopulation.h"
#include "EventSubstitionData.h"
#include "ProceduralGenerationData.generated.h"

class UCurveFloat;
class AActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UProceduralGenerationData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FQuadrantSpawnTypeProperties> QuadrantSpawnTypeProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FQuadrantSpawnCategories> QuadrantSpawnCategories;

	UPROPERTY()
	TArray<FThemeProperties> ThemeProperties_DEPRECATED;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSurvivorCount;

	UPROPERTY()
	TArray<FKillerItemDependencies> KillersItemDependencies_DEPRECATED;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* SurvivorItemPopulationProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSurvivorItemProperties> SurvivorItemProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* EscapeStrategyPopulationProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEscapeStrategyProperty> EscapeStrategyProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEscapeTypeObjects> EscapeTypeActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftClassPtr<AActor>> Basements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayElementsPopulation> ElementsPopulation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FManagedGameplayElementsPopulation> ManagedElementsPopulation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSurvivorGroupingProbability> SurvivorGroupingProbabilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ProceduralMapOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProceduralTileWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProceduralTileHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ProceduralQuadTileMapOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProceduralQuadTileCubeWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DifficultyModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CharacterCameraHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CharacterCollisionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnerCollisionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotemVisualHeight;

private:
	UPROPERTY()
	TArray<FSpecialBehaviourPopulation> SpecialBehaviourPopulation_DEPRECATED;

	UPROPERTY()
	TArray<FEventSubstitionData> _eventProperties_DEPRECATED;

public:
	UProceduralGenerationData();
};

FORCEINLINE uint32 GetTypeHash(const UProceduralGenerationData) { return 0; }
