#pragma once

#include "CoreMinimal.h"
#include "DBDDangerPredictionComponent.h"
#include "K35KillerTeleportPointDangerPredictionComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK35_API UK35KillerTeleportPointDangerPredictionComponent : public UDBDDangerPredictionComponent
{
	GENERATED_BODY()

public:
	UK35KillerTeleportPointDangerPredictionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerTeleportPointDangerPredictionComponent) { return 0; }
