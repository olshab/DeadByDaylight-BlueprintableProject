#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "Templates/SubclassOf.h"
#include "AISkill_InteractionSetTrap.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionSetTrap : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> TrapClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDistanceFromPointOfInterest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDistanceFromAnotherSetTrap;

public:
	UAISkill_InteractionSetTrap();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionSetTrap) { return 0; }
