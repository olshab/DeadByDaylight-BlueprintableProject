#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInputSplineComponent.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfSplineControlPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SplineLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SplineResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SplineClosed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTransform> SplineControlPoints;

public:
	UHoudiniInputSplineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputSplineComponent) { return 0; }
