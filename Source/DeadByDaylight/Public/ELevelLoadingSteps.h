#pragma once

#include "CoreMinimal.h"
#include "ELevelLoadingSteps.generated.h"

UENUM(BlueprintType)
enum class ELevelLoadingSteps : uint8
{
	Invalid,
	WaitingForProceduralLevelBuilder,
	WaitingForPlayersToBeSpawned,
	WaitingForAIPawnToBeSpawned,
	WaitingForKillerSpecificStateComponentLogic,
	WaitingForMapSpecificComponentLogic,
	WaitingForAssetPreloader,
	WaitingForLoadoutAndTheme,
	WaitingForPIAToBeSpawnedAndInitialized,
	WaitingForNavmeshComputation,
	WaitingForMutatorsComponentLogic,
	SetGameLoadedAndReadyToPlay,
	WaitingForIntroToBeDone,
	LoadingCompleted,
	FirstLoadingStep = 1,
	Count = 13,
};
