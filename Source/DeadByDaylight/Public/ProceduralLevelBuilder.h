#pragma once

#include "CoreMinimal.h"
#include "ETileSpawnPointType.h"
#include "GameFramework/Actor.h"
#include "EGameplayElementType.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "GeneratedLevelData.h"
#include "GenerationParams.h"
#include "ProceduralLevelBuilder.generated.h"

class UAkAudioBank;
class UDBDDesignTunables;
class UMapData;
class UTileMatrix;
class ADBDClientSyncer;
class UProceduralGenerationData;
class ATile;
class UPaperTileMap;
class UEdgeObjectHandlingStrategy;
class UTileBank;
class UObjectLibrary;
class UActorSpawner;
class AProceduralLevelData;
class UBlackboardComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AProceduralLevelBuilder : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PathToMapDirectory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PathToTilesDirectory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PathToEventSpawnablesDirectory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> EventSpawnablesParentDirectories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EventSpawnablePositionWeightCoefficient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EventSpawnablePositionWeightPowerBase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EGameplayElementType, float> StaticActorSpawnerDecorationBudgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ETileSpawnPointType, float> StaticSpawnPointDecorationBudgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float KillerMinProximityFromCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorMinProximityFromOtherCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinProximityBetweenGenerators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinProximityBetweenChests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinProximityBetweenTotems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorMinProximityFromGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorMinProximityFromTotem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorMaxLineOfSightFromTotem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinProximityBetweenSpecialBehaviourItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpecialBehaviourItemMinProximityFromSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpecialBehaviourItemMinProximityFromKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UPaperTileMap> DebugMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<ATile>> DebugTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SmallMeatLockerMinProximityFromKillerLair;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FactorToAdjustToWhenOutOfProximity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FactorToAdjustToWhenInLineOfSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeightAmplifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeightAmplifierActivationHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UProceduralGenerationData* ProceduralGenerationData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TileWeightRateOfDecay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float QuadTileWeightRateOfDecay;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UClass* _tileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UMapData* _mapData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ATile*> _outOfWorldTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAkAudioBank* _ambientAudioBank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UObjectLibrary* _availableTilesLibrary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UObjectLibrary* _availableEventSpawnablesLibrary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UObjectLibrary* _availableDerivedTileLibrary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UDBDDesignTunables> DesignTunableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDDesignTunables* _designTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGeneratedLevelData _generatedData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UTileMatrix* _tileMatrix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UTileBank* _tileBank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActorSpawner* _killerLairSpawner;

	UPROPERTY(EditAnywhere, Transient)
	TArray<FSoftObjectPath> _preloadAssetReferences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<AActor>> _chestItemAssetReferences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UClass* _slasherPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ATile*> _tilesThatHaveBeenSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _eventSpawnablesThatHaveBeenStreamed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AProceduralLevelData* _debugProceduralDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ADBDClientSyncer* _syncer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBlackboardComponent* _blackboardComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UEdgeObjectHandlingStrategy* _edgeObjectHandlingStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ATile* _backupKillerLairTile;

private:
	UFUNCTION(BlueprintCallable)
	void SyncSeeds();

	UFUNCTION(BlueprintCallable)
	void StartGenerationOnSyncerReady();

public:
	UFUNCTION(BlueprintCallable)
	AActor* SpawnActor(UClass* actorClass, ETileSpawnPointType spawnPointType);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RemoveMist();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DebugShareGenerationData(FGenerationParams usedParams);

	UFUNCTION(BlueprintCallable)
	void BuildFromSeed();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ApplyMist(float modifier);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AProceduralLevelBuilder();
};

FORCEINLINE uint32 GetTypeHash(const AProceduralLevelBuilder) { return 0; }
