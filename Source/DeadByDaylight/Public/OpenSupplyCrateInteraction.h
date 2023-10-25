#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "OpenSupplyCrateInteraction.generated.h"

class ASupplyCrateInteractable;
class UAnimSequence;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOpenSupplyCrateInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASupplyCrateInteractable* _owningSupplyCrate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _interactionWasComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAnimSequence* _successExitTimeAnimSequenceReference;

public:
	UOpenSupplyCrateInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOpenSupplyCrateInteraction) { return 0; }
