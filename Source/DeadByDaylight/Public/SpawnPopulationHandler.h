#pragma once

#include "CoreMinimal.h"
#include "SpawnPopulationHandler.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FSpawnPopulationHandler
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<USceneComponent*> _allAvailableSpawners;

public:
	DEADBYDAYLIGHT_API FSpawnPopulationHandler();
};

FORCEINLINE uint32 GetTypeHash(const FSpawnPopulationHandler) { return 0; }
