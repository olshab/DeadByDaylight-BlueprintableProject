#pragma once

#include "CoreMinimal.h"
#include "HoudiniBakedOutputObjectIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniBakedOutputObjectIdentifier
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PartId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SplitIdentifier;

public:
	HOUDINIENGINERUNTIME_API FHoudiniBakedOutputObjectIdentifier();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniBakedOutputObjectIdentifier) { return 0; }
