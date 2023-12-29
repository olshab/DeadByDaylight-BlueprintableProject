#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "EventSpawnableSpawnRequirements.generated.h"

USTRUCT(BlueprintType)
struct FEventSpawnableSpawnRequirements
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableDropdown Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinSpawnNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSpawnNumber;

public:
	DEADBYDAYLIGHT_API FEventSpawnableSpawnRequirements();
};

FORCEINLINE uint32 GetTypeHash(const FEventSpawnableSpawnRequirements) { return 0; }
