#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "CaptureVoidWorldHauntInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCaptureVoidWorldHauntInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FText _standardInteractionString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FText _contestedInteractionString;

public:
	UCaptureVoidWorldHauntInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCaptureVoidWorldHauntInteraction) { return 0; }
