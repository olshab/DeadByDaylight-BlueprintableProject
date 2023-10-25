#pragma once

#include "CoreMinimal.h"
#include "EHoudiniCurveOutputType.h"
#include "EHoudiniCurveType.h"
#include "EHoudiniCurveMethod.h"
#include "HoudiniCurveOutputProperties.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniCurveOutputProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniCurveOutputType CurveOutputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bClosed;

	UPROPERTY(EditAnywhere)
	EHoudiniCurveType CurveType;

	UPROPERTY(EditAnywhere)
	EHoudiniCurveMethod CurveMethod;

public:
	HOUDINIENGINERUNTIME_API FHoudiniCurveOutputProperties();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniCurveOutputProperties) { return 0; }
