#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "BarrelInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class BARREL2023_API UBarrelInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _facingTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _facingHeightUpOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _facingHeightDownOffset;

public:
	UBarrelInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBarrelInteraction) { return 0; }
