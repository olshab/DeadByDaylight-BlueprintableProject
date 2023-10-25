#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ReflectionCaptureTwoStates.generated.h"

USTRUCT(BlueprintType)
struct FReflectionCaptureTwoStates
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference ComponentReference;

public:
	DEADBYDAYLIGHT_API FReflectionCaptureTwoStates();
};

FORCEINLINE uint32 GetTypeHash(const FReflectionCaptureTwoStates) { return 0; }
