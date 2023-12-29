#pragma once

#include "CoreMinimal.h"
#include "K34FootstepVisibilityRaycastDefinition.generated.h"

USTRUCT(BlueprintType)
struct FK34FootstepVisibilityRaycastDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HorizontalOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SphereTraceRadius;

public:
	THEK34_API FK34FootstepVisibilityRaycastDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FK34FootstepVisibilityRaycastDefinition) { return 0; }
