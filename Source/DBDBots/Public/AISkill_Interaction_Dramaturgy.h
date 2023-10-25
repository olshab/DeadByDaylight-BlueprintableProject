#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AITunableParameter.h"
#include "AISkill_Interaction_Dramaturgy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_Dramaturgy : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter UseDramaturgyUnderNavLinkDistance;

public:
	UAISkill_Interaction_Dramaturgy();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_Dramaturgy) { return 0; }
