#pragma once

#include "CoreMinimal.h"
#include "ELevelBuildingState.generated.h"

UENUM(BlueprintType)
enum class ELevelBuildingState : uint8
{
	NotInitialized,
	WaitingForInitialSync,
	SyncSeeds,
	GetAvailableItems,
	PendingGettingItems,
	GettingLevelsDone,
	PendingPremadeMapStreaming,
	GetThemedTiles,
	PendingGettingTiles,
	SpawnEscapeTiles,
	SpawnBasementTile,
	SpawnOutOfWorldTiles,
	SpawningLevelTiles,
	SpawnInterTileElements,
	PendingInterTileElementsSpawning,
	SpawningActors,
	SpawningMultiPassActors,
	AttachParentActors,
	StallingForRemotes,
	BuildingDone,
	BuildingStateCount,
};
