#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AISkill_FindInteractable.h"
#include "AISkill_FindInteractable_StatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_StatusEffect : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag RequiredPerkFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool InvertCondition;

public:
	UAISkill_FindInteractable_StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_StatusEffect) { return 0; }
