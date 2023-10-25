#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_CloseTelevisionNearGenerator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_CloseTelevisionNearGenerator : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaximumCondemnedPercentToCloseTelevision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter DistanceBetweenGeneratorAndTelevisionThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BaseValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CloseTelevisionDistanceLinearWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CloseTelevisionMaximumDistanceFromCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxHeightDifferenceToCloseTelevisions;

public:
	UAISkill_FindInteractable_CloseTelevisionNearGenerator();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_CloseTelevisionNearGenerator) { return 0; }
