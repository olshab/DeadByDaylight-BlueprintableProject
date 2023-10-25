#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseInputAccelerationConstraintStrategy.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UBaseInputAccelerationConstraintStrategy : public UActorComponent
{
	GENERATED_BODY()

public:
	UBaseInputAccelerationConstraintStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBaseInputAccelerationConstraintStrategy) { return 0; }
