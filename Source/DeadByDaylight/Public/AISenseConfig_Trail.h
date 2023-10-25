#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_Trail.generated.h"

class UAISense_Trail;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseConfig_Trail : public UAISenseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UAISense_Trail> Implementation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PeripheralVisionAngleDegrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAISenseAffiliationFilter DetectionByAffiliation;

public:
	UAISenseConfig_Trail();
};

FORCEINLINE uint32 GetTypeHash(const UAISenseConfig_Trail) { return 0; }
