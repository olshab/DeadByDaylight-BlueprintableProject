#pragma once

#include "CoreMinimal.h"
#include "TrapInteractableInteraction.h"
#include "EPalletSide.h"
#include "S39p02TrapInteraction.generated.h"

class ATrapChemicalBomb;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class US39p02TrapInteraction : public UTrapInteractableInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ATrapChemicalBomb* _chemicalBomb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPalletSide _side;

public:
	US39p02TrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const US39p02TrapInteraction) { return 0; }
