#pragma once

#include "CoreMinimal.h"
#include "HealInteraction.h"
#include "HealSelfInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UHealSelfInteraction : public UHealInteraction
{
	GENERATED_BODY()

public:
	UHealSelfInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHealSelfInteraction) { return 0; }
