#pragma once

#include "CoreMinimal.h"
#include "ArchivesNodeCoordinates.generated.h"

USTRUCT(BlueprintType)
struct FArchivesNodeCoordinates
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	double X;

	UPROPERTY(EditAnywhere)
	double Y;

public:
	DEADBYDAYLIGHT_API FArchivesNodeCoordinates();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesNodeCoordinates) { return 0; }
