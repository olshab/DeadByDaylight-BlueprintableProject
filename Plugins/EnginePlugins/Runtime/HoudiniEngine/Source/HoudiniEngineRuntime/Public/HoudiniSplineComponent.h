#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EHoudiniCurveType.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniEngineCopyPropertiesInterface.h"
#include "EHoudiniCurveBreakpointParameterization.h"
#include "EHoudiniCurveMethod.h"
#include "HoudiniSplineComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniSplineComponent : public USceneComponent, public IHoudiniEngineCopyPropertiesInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTransform> CurvePoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> DisplayPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> DisplayPointIndexDivider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HoudiniSplineName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bClosed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReversed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurveOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsHoudiniSplineVisible;

	UPROPERTY(EditAnywhere)
	EHoudiniCurveType CurveType;

	UPROPERTY(EditAnywhere)
	EHoudiniCurveMethod CurveMethod;

	UPROPERTY(EditAnywhere)
	EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsOutputCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCookOnCurveChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsLegacyInputCurve;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
	bool bHasChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
	bool bNeedsToTriggerUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bIsInputCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bIsEditableOutputCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
	int32 NodeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString PartName;

public:
	UHoudiniSplineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniSplineComponent) { return 0; }
