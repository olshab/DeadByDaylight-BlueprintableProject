#pragma once

#include "CoreMinimal.h"
#include "K33GridCellLocation.generated.h"

USTRUCT(BlueprintType)
struct FK33GridCellLocation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Y;

public:
	THEK33_API FK33GridCellLocation();
};

FORCEINLINE uint32 GetTypeHash(const FK33GridCellLocation) { return 0; }
