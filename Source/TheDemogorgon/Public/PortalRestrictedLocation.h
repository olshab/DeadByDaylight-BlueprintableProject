#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PortalRestrictedLocation.generated.h"

USTRUCT(BlueprintType)
struct FPortalRestrictedLocation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceSquared;

public:
	THEDEMOGORGON_API FPortalRestrictedLocation();
};

FORCEINLINE uint32 GetTypeHash(const FPortalRestrictedLocation) { return 0; }
