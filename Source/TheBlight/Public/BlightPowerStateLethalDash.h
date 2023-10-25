#pragma once

#include "CoreMinimal.h"
#include "BlightPowerStateDash.h"
#include "SecondaryInteractionProperties.h"
#include "BlightPowerStateLethalDash.generated.h"

UCLASS(Blueprintable)
class UBlightPowerStateLethalDash : public UBlightPowerStateDash
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSecondaryInteractionProperties _secondaryInteractionProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _smashBreakables;

public:
	UBlightPowerStateLethalDash();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateLethalDash) { return 0; }
