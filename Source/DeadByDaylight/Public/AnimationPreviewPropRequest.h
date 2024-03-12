#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "AnimationPreviewPropRequest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAnimationPreviewPropRequest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> PropClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform SpawnTransform;

public:
	DEADBYDAYLIGHT_API FAnimationPreviewPropRequest();
};

FORCEINLINE uint32 GetTypeHash(const FAnimationPreviewPropRequest) { return 0; }
