#pragma once

#include "CoreMinimal.h"
#include "ItemPerformedInteraction.h"
#include "HealSelfInteraction.h"
#include "HealSelfMedkitInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UHealSelfMedkitInteraction : public UHealSelfInteraction, public IItemPerformedInteraction
{
	GENERATED_BODY()

public:
	UHealSelfMedkitInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHealSelfMedkitInteraction) { return 0; }
