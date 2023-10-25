#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_Waker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_Waker : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter FixedGoalWeight;

public:
	UAISkill_FindInteractable_Waker();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_Waker) { return 0; }
