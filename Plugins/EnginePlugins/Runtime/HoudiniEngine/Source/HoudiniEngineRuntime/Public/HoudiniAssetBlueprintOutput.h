#pragma once

#include "CoreMinimal.h"
#include "HoudiniOutputObject.h"
#include "HoudiniAssetBlueprintOutput.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniAssetBlueprintOutput
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OutputIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHoudiniOutputObject OutputObject;

public:
	HOUDINIENGINERUNTIME_API FHoudiniAssetBlueprintOutput();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniAssetBlueprintOutput) { return 0; }
