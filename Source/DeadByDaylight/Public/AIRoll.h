#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AIRoll.generated.h"

USTRUCT(BlueprintType)
struct FAIRoll
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter Random;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter OnFailCooldown;

public:
	DEADBYDAYLIGHT_API FAIRoll();
};

FORCEINLINE uint32 GetTypeHash(const FAIRoll) { return 0; }
