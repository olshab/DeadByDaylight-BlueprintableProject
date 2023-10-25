#pragma once

#include "CoreMinimal.h"
#include "AkTriangle.generated.h"

USTRUCT(BlueprintType)
struct FAkTriangle
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint16 Point0;

	UPROPERTY(EditAnywhere)
	uint16 Point1;

	UPROPERTY(EditAnywhere)
	uint16 Point2;

	UPROPERTY(EditAnywhere)
	uint16 Surface;

public:
	AKAUDIO_API FAkTriangle();
};

FORCEINLINE uint32 GetTypeHash(const FAkTriangle) { return 0; }
