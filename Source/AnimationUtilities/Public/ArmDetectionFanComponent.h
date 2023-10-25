#pragma once

#include "CoreMinimal.h"
#include "DetectionFanComponent.h"
#include "ArmDetectionFanComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UArmDetectionFanComponent : public UDetectionFanComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _shoulderBone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _elbowBone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _handBone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _indexBone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _hipBone;

public:
	UArmDetectionFanComponent();
};

FORCEINLINE uint32 GetTypeHash(const UArmDetectionFanComponent) { return 0; }
