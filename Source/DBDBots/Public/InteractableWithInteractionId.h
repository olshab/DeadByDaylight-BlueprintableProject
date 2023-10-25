#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractableWithInteractionId.generated.h"

class AInteractable;

USTRUCT(BlueprintType)
struct FInteractableWithInteractionId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AInteractable> InteractableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InteractionId;

public:
	DBDBOTS_API FInteractableWithInteractionId();
};

FORCEINLINE uint32 GetTypeHash(const FInteractableWithInteractionId) { return 0; }
