#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "AkAssetDataSwitchContainerData.generated.h"

class UAkMediaAsset;
class UAkGroupValue;
class UAkAssetDataSwitchContainerData;

UCLASS(Blueprintable, EditInlineNew)
class AKAUDIO_API UAkAssetDataSwitchContainerData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAkGroupValue> GroupValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkGroupValue* DefaultGroupValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAkMediaAsset*> MediaList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAkAssetDataSwitchContainerData*> Children;

public:
	UAkAssetDataSwitchContainerData();
};

FORCEINLINE uint32 GetTypeHash(const UAkAssetDataSwitchContainerData) { return 0; }
