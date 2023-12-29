#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AISkill_Interaction_DismissCrow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_DismissCrow : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BBShouldFallPallet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StopAtPalletDistance;

public:
	UAISkill_Interaction_DismissCrow();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_DismissCrow) { return 0; }
