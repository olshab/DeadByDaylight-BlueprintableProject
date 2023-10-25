#pragma once

#include "CoreMinimal.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "ExitGateSwitchesRestrictedPlacementAreaStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UExitGateSwitchesRestrictedPlacementAreaStrategy : public URestrictedPlacementAreaStrategy
{
	GENERATED_BODY()

public:
	UExitGateSwitchesRestrictedPlacementAreaStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UExitGateSwitchesRestrictedPlacementAreaStrategy) { return 0; }
