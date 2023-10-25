#pragma once

#include "CoreMinimal.h"
#include "EInputInteractionType.h"
#include "InteractionPlayerProperties.h"
#include "StoredInteraction.generated.h"

class UInteractionDefinition;

USTRUCT(BlueprintType)
struct FStoredInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient, Export)
	TWeakObjectPtr<UInteractionDefinition> _interaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EInputInteractionType _inputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FInteractionPlayerProperties _playerProperties;

public:
	DEADBYDAYLIGHT_API FStoredInteraction();
};

FORCEINLINE uint32 GetTypeHash(const FStoredInteraction) { return 0; }
