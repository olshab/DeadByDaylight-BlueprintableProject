#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniRampInterpolationType.h"
#include "HoudiniParameterRampColorPoint.generated.h"

class UHoudiniParameterChoice;
class UHoudiniParameterColor;
class UHoudiniParameterFloat;

UCLASS(Blueprintable, DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampColorPoint : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Value;

	UPROPERTY(EditAnywhere)
	EHoudiniRampInterpolationType Interpolation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InstanceIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHoudiniParameterFloat* PositionParentParm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHoudiniParameterColor* ValueParentParm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UHoudiniParameterChoice* InterpolationParentParm;

public:
	UHoudiniParameterRampColorPoint();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterRampColorPoint) { return 0; }
