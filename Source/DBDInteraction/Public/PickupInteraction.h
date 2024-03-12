#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "PickupInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPickupInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> _nonOverrideableInteractionsOnTargetPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> _overrideableInteractions;

public:
	UPickupInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UPickupInteraction) { return 0; }
