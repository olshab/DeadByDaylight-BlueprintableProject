#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkMediaAssetData.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkMediaAssetData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsStreamed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseDeviceMemory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Language;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AssetPlatform;

public:
	UAkMediaAssetData();
};

FORCEINLINE uint32 GetTypeHash(const UAkMediaAssetData) { return 0; }
