#pragma once

#include "CoreMinimal.h"
#include "BlightPowerStateDash.h"
#include "BlightPowerStateNonLethalDash.generated.h"

UCLASS(Blueprintable)
class UBlightPowerStateNonLethalDash : public UBlightPowerStateDash
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _smashBreakables;

public:
	UBlightPowerStateNonLethalDash();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateNonLethalDash) { return 0; }
