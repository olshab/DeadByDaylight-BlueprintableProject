#pragma once

#include "CoreMinimal.h"
#include "BasePushStrategyComponent.h"
#include "SidePushStrategyComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API USidePushStrategyComponent : public UBasePushStrategyComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxImpulseStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minImpulseStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _detectorCapsuleInflation;

public:
	USidePushStrategyComponent();
};

FORCEINLINE uint32 GetTypeHash(const USidePushStrategyComponent) { return 0; }
