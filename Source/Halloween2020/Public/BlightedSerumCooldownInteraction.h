#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BlightedSerumCooldownInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumCooldownInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cameraPitchRecenterTime;

public:
	UBlightedSerumCooldownInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBlightedSerumCooldownInteraction) { return 0; }
