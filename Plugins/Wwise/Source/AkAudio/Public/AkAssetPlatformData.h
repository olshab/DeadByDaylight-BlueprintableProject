#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkAssetPlatformData.generated.h"

class UAkAssetData;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAssetPlatformData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAkAssetData* CurrentAssetData;

public:
	UAkAssetPlatformData();
};

FORCEINLINE uint32 GetTypeHash(const UAkAssetPlatformData) { return 0; }
