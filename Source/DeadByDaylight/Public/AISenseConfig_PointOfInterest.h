#pragma once

#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_PointOfInterest.generated.h"

class UAISense_PointOfInterest;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseConfig_PointOfInterest : public UAISenseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UAISense_PointOfInterest> Implementation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinGeneratorRepairSoundRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxGeneratorRepairSoundRange;

public:
	UAISenseConfig_PointOfInterest();
};

FORCEINLINE uint32 GetTypeHash(const UAISenseConfig_PointOfInterest) { return 0; }
