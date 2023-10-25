#pragma once

#include "CoreMinimal.h"
#include "AkAssetData.h"
#include "AkAssetDataWithMedia.generated.h"

class UAkMediaAsset;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAssetDataWithMedia : public UAkAssetData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAkMediaAsset*> MediaList;

public:
	UAkAssetDataWithMedia();
};

FORCEINLINE uint32 GetTypeHash(const UAkAssetDataWithMedia) { return 0; }
