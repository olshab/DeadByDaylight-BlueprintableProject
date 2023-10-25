#pragma once

#include "CoreMinimal.h"
#include "IsPlayerPerformingInteraction.h"
#include "IsPlayerAbsorbingBloodOrbsCondition.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIsPlayerAbsorbingBloodOrbsCondition : public UIsPlayerPerformingInteraction
{
	GENERATED_BODY()

public:
	UIsPlayerAbsorbingBloodOrbsCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsPlayerAbsorbingBloodOrbsCondition) { return 0; }
