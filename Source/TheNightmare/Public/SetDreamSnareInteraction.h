#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SetDreamSnareInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class USetDreamSnareInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MinPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MinPlacementDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MaxPlacementDistance;

public:
	UFUNCTION(BlueprintPure)
	bool HasCancelledDreamSnare() const;

	UFUNCTION(BlueprintPure)
	float GetTrapDistanceFromControlRotation() const;

public:
	USetDreamSnareInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USetDreamSnareInteraction) { return 0; }
