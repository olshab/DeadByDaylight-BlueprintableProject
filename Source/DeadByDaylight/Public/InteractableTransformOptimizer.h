#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractableTransformOptimizer.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInteractableTransformOptimizer : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _optimizeTransformUpdate;

public:
	UInteractableTransformOptimizer();
};

FORCEINLINE uint32 GetTypeHash(const UInteractableTransformOptimizer) { return 0; }
