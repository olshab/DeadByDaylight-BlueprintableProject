#pragma once

#include "CoreMinimal.h"
#include "ArrayOfATile.generated.h"

class ATile;

USTRUCT(BlueprintType)
struct FArrayOfATile
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ATile*> ArrayOfTiles;

public:
	DEADBYDAYLIGHT_API FArrayOfATile();
};

FORCEINLINE uint32 GetTypeHash(const FArrayOfATile) { return 0; }
