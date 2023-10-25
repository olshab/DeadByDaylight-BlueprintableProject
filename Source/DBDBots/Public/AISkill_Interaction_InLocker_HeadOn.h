#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction_InLocker.h"
#include "AITunableParameter.h"
#include "AISkill_Interaction_InLocker_HeadOn.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_InLocker_HeadOn : public UAISkill_Interaction_InLocker
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxKillerNearbyDistance;

public:
	UAISkill_Interaction_InLocker_HeadOn();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_InLocker_HeadOn) { return 0; }
