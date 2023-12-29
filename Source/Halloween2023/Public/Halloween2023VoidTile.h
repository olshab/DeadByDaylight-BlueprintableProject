#pragma once

#include "CoreMinimal.h"
#include "Tile.h"
#include "Halloween2023VoidTile.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AHalloween2023VoidTile : public ATile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> _teleporterSpawnLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> _hauntSpawnPoints;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVoidZoneAboutToClose();

public:
	AHalloween2023VoidTile();
};

FORCEINLINE uint32 GetTypeHash(const AHalloween2023VoidTile) { return 0; }
