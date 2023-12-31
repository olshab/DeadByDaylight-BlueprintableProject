#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "GameplayTagContainer.h"
#include "AISkill_Interaction_Clairvoyance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_Clairvoyance : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag DropCooldownTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DropCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAddToExistingDuration;

public:
	UAISkill_Interaction_Clairvoyance();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_Clairvoyance) { return 0; }
