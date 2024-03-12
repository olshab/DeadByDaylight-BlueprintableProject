#pragma once

#include "CoreMinimal.h"
#include "ItemPerformedInteraction.h"
#include "HealOtherInteraction.h"
#include "HealOtherMedkitInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UHealOtherMedkitInteraction : public UHealOtherInteraction, public IItemPerformedInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FText _interactionTextWhenEmpty;

public:
	UHealOtherMedkitInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHealOtherMedkitInteraction) { return 0; }
