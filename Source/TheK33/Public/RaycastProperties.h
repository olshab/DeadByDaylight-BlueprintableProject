#pragma once

#include "CoreMinimal.h"
#include "RaycastProperties.generated.h"

USTRUCT(BlueprintType)
struct FRaycastProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HalfHeightPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RadiusPercentage;

public:
	THEK33_API FRaycastProperties();
};

FORCEINLINE uint32 GetTypeHash(const FRaycastProperties) { return 0; }
