#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DataTableDropdown.h"
#include "AISkill_Interaction.h"
#include "AISkill_Interaction_InLocker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_InLocker : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableDropdown PerkID;

	UPROPERTY(EditAnywhere)
	FGameplayTag CooldownTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InitialRunningTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StartRefreshingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RefreshTimeMargin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RefreshTimeAmount;

public:
	UAISkill_Interaction_InLocker();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_InLocker) { return 0; }
