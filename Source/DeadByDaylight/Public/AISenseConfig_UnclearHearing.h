#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "AISenseConfig_UnclearHearing.generated.h"

class UAISense_UnclearHearing;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseConfig_UnclearHearing : public UAISenseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UAISense_UnclearHearing> Implementation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HearingRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter NoiseRangeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ReactionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAISenseAffiliationFilter DetectionByAffiliation;

public:
	UAISenseConfig_UnclearHearing();
};

FORCEINLINE uint32 GetTypeHash(const UAISenseConfig_UnclearHearing) { return 0; }
