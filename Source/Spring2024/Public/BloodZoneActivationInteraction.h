#pragma once

#include "CoreMinimal.h"
#include "BloodZoneBaseInteraction.h"
#include "BloodZoneActivationInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBloodZoneActivationInteraction : public UBloodZoneBaseInteraction
{
	GENERATED_BODY()

public:
	UBloodZoneActivationInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBloodZoneActivationInteraction) { return 0; }
