#pragma once

#include "CoreMinimal.h"
#include "AkMediaAsset.h"
#include "AkLocalizedMediaAsset.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkLocalizedMediaAsset : public UAkMediaAsset
{
	GENERATED_BODY()

public:
	UAkLocalizedMediaAsset();
};

FORCEINLINE uint32 GetTypeHash(const UAkLocalizedMediaAsset) { return 0; }
