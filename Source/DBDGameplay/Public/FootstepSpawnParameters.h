#pragma once

#include "CoreMinimal.h"
#include "FootstepSpawnParameters.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FFootstepSpawnParameters
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCurveFloat* FadeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCurveFloat* VeinsCurve;

public:
	DBDGAMEPLAY_API FFootstepSpawnParameters();
};

FORCEINLINE uint32 GetTypeHash(const FFootstepSpawnParameters) { return 0; }
