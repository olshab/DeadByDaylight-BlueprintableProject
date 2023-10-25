#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInstancedOutput.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FHoudiniInstancedOutput
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UObject> OriginalObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OriginalObjectIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTransform> OriginalTransforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UObject>> VariationObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTransform> VariationTransformOffsets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> TransformVariationIndices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> OriginalInstanceIndices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStale;

public:
	HOUDINIENGINERUNTIME_API FHoudiniInstancedOutput();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniInstancedOutput) { return 0; }
