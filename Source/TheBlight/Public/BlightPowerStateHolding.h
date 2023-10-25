#pragma once

#include "CoreMinimal.h"
#include "BlightPowerState.h"
#include "SecondaryInteractionProperties.h"
#include "BlightPowerStateHolding.generated.h"

UCLASS(Blueprintable)
class UBlightPowerStateHolding : public UBlightPowerState
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSecondaryInteractionProperties _secondaryInteractionProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _allowNavigation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _dashSpeedForProjection;

public:
	UBlightPowerStateHolding();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateHolding) { return 0; }
