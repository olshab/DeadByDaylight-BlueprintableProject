#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DisarmBearTrapInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDisarmBearTrapInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _averageMaxVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _averageMaxVelocitySquared;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _updateMontageID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _loudNoiseAudibleRangeTunable;

public:
	UDisarmBearTrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDisarmBearTrapInteraction) { return 0; }
