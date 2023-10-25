#pragma once

#include "CoreMinimal.h"
#include "ComponentInstanceDataCache.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniSplineComponentInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniSplineComponentInstanceData: public FActorComponentInstanceData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTransform> CurvePoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> DisplayPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> DisplayPointIndexDivider;

public:
	HOUDINIENGINERUNTIME_API FHoudiniSplineComponentInstanceData();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniSplineComponentInstanceData) { return 0; }
