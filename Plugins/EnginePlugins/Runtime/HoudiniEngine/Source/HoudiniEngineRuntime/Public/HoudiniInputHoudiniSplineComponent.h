#pragma once

#include "CoreMinimal.h"
#include "EHoudiniCurveMethod.h"
#include "HoudiniInputObject.h"
#include "EHoudiniCurveType.h"
#include "HoudiniInputHoudiniSplineComponent.generated.h"

class UHoudiniSplineComponent;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EHoudiniCurveType CurveType;

	UPROPERTY(EditAnywhere)
	EHoudiniCurveMethod CurveMethod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Reversed;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHoudiniSplineComponent* CachedComponent;

public:
	UHoudiniInputHoudiniSplineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputHoudiniSplineComponent) { return 0; }
