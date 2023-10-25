#pragma once

#include "CoreMinimal.h"
#include "ClippedActor.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FClippedActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Transient, Export)
	TArray<TWeakObjectPtr<UPrimitiveComponent>> DisplayComponents;

	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<UPrimitiveComponent*, TWeakObjectPtr<UPrimitiveComponent>> CollidingPrimitives;

public:
	DEADBYDAYLIGHT_API FClippedActor();
};

FORCEINLINE uint32 GetTypeHash(const FClippedActor) { return 0; }
