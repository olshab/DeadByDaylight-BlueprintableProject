#pragma once

#include "CoreMinimal.h"
#include "AkAssetDataWithMedia.h"
#include "AkAssetDataSwitchContainer.generated.h"

class UAkAssetDataSwitchContainerData;
class UAkGroupValue;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAkAssetDataSwitchContainerData*> SwitchContainers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkGroupValue* DefaultGroupValue;

public:
	UAkAssetDataSwitchContainer();
};

FORCEINLINE uint32 GetTypeHash(const UAkAssetDataSwitchContainer) { return 0; }
