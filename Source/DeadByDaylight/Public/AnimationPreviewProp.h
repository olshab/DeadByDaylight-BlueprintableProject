#pragma once

#include "CoreMinimal.h"
#include "AnimationPreviewProp.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAnimationPreviewProp
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* SpawnedProp;

public:
	DEADBYDAYLIGHT_API FAnimationPreviewProp();
};

FORCEINLINE uint32 GetTypeHash(const FAnimationPreviewProp) { return 0; }
