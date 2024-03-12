#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_SolveCondemned.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_SolveCondemned : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter NearCondemnedWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter HighCondemnedThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxLockedCondemnThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SolveCondemnedBasicWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CondemnedLevelProportionalWeight;

public:
	UAISkill_FindInteractable_SolveCondemned();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_SolveCondemned) { return 0; }
