#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseInputAccelerationConstraintStrategy.h"
#include "K33TunnelMovementInputAccelerationConstraintStrategyComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TunnelMovementInputAccelerationConstraintStrategyComponent : public UBaseInputAccelerationConstraintStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FVector> _forcedDirectionalInputs;

public:
	UK33TunnelMovementInputAccelerationConstraintStrategyComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TunnelMovementInputAccelerationConstraintStrategyComponent) { return 0; }
