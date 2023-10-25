#pragma once

#include "CoreMinimal.h"
#include "ViewRotationStrategy.h"
#include "UObject/NoExportTypes.h"
#include "BaseCameraTargetingStrategy.generated.h"

class AActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UBaseCameraTargetingStrategy : public UObject, public IViewRotationStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxFreeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxInputRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _interpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _interpolationSpeedOutsideFreeMoveZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* _target;

public:
	UBaseCameraTargetingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBaseCameraTargetingStrategy) { return 0; }
