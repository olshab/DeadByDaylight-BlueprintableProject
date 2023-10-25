#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USpawnEffectsOnAllSurvivorsBaseAddon : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _canCreateMultipleInstances;

public:
	USpawnEffectsOnAllSurvivorsBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const USpawnEffectsOnAllSurvivorsBaseAddon) { return 0; }
