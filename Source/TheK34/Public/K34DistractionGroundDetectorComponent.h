#pragma once

#include "CoreMinimal.h"
#include "BaseGroundDetectorComponent.h"
#include "K34DistractionGroundDetectorComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK34_API UK34DistractionGroundDetectorComponent : public UBaseGroundDetectorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _startPositionZOffSet;

public:
	UK34DistractionGroundDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34DistractionGroundDetectorComponent) { return 0; }
