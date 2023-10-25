#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "SlashedOutOfBearTrapInteraction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class USlashedOutOfBearTrapInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> _overridableInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* _updateMontage;

public:
	USlashedOutOfBearTrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USlashedOutOfBearTrapInteraction) { return 0; }
