#pragma once

#include "CoreMinimal.h"
#include "InteractionAnimationPreview.h"
#include "MoriAnimationPreview.generated.h"

UCLASS(Blueprintable)
class UMoriAnimationPreview : public UInteractionAnimationPreview
{
	GENERATED_BODY()

public:
	UMoriAnimationPreview();
};

FORCEINLINE uint32 GetTypeHash(const UMoriAnimationPreview) { return 0; }
