#pragma once

#include "CoreMinimal.h"
#include "HoudiniOutputObjectIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniOutputObjectIdentifier
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ObjectId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeoId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PartId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SplitIdentifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PartName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PrimitiveIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PointIndex;

public:
	HOUDINIENGINERUNTIME_API FHoudiniOutputObjectIdentifier();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniOutputObjectIdentifier) { return 0; }
