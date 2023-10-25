#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniRampInterpolationType.h"
#include "HoudiniParameterRampFloatPoint.generated.h"

class UHoudiniParameterChoice;
class UHoudiniParameterFloat;

UCLASS(Blueprintable, DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampFloatPoint : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

	UPROPERTY(EditAnywhere)
	EHoudiniRampInterpolationType Interpolation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InstanceIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHoudiniParameterFloat* PositionParentParm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHoudiniParameterFloat* ValueParentParm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHoudiniParameterChoice* InterpolationParentParm;

public:
	UHoudiniParameterRampFloatPoint();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterRampFloatPoint) { return 0; }
