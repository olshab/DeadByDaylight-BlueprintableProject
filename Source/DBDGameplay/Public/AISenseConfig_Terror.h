#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "EAITerrorLevel.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_Terror.generated.h"

class UAISense_Terror;

UCLASS(Blueprintable, EditInlineNew)
class DBDGAMEPLAY_API UAISenseConfig_Terror : public UAISenseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UAISense_Terror> Implementation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxBreathingSoundRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAITerrorLevel, float> TerrorRanges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAISenseAffiliationFilter DetectionByAffiliation;

public:
	UAISenseConfig_Terror();
};

FORCEINLINE uint32 GetTypeHash(const UAISenseConfig_Terror) { return 0; }
