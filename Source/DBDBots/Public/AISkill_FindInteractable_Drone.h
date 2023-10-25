#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "Templates/SubclassOf.h"
#include "AISkill_FindInteractable_Drone.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_Drone : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BaseActiveWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BaseScoutingWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AActor>> ValidGoalObjectClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DroneRadiusMargin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DroneScoutingAutoDiscoverRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DroneStealthAutoDiscoverRange;

public:
	UAISkill_FindInteractable_Drone();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_Drone) { return 0; }
