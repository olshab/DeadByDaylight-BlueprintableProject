#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_UnstableRift.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAISkill_FindInteractable_UnstableRift : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxVoidEnergyWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxDistanceWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter RiftDistanceToReachMaxDistanceWeight;

public:
	UAISkill_FindInteractable_UnstableRift();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_UnstableRift) { return 0; }
