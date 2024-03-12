#pragma once

#include "CoreMinimal.h"
#include "EAnimationPreviewType.h"
#include "AnimationPreviewPropRequest.h"
#include "AnimationPreviewCharacterRequest.h"
#include "AnimationPreviewRequest.generated.h"

USTRUCT(BlueprintType)
struct FAnimationPreviewRequest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EAnimationPreviewType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAnimationPreviewCharacterRequest> CharactersToUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAnimationPreviewPropRequest> PropsToUse;

public:
	DEADBYDAYLIGHT_API FAnimationPreviewRequest();
};

FORCEINLINE uint32 GetTypeHash(const FAnimationPreviewRequest) { return 0; }
