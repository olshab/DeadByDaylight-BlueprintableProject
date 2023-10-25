#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkMediaAsset.generated.h"

class UAkMediaAssetData;

UCLASS(Blueprintable)
class AKAUDIO_API UAkMediaAsset : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AssetRegistrySearchable)
	FString MediaName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UObject*> UserData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Language;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAkMediaAssetData* CurrentMediaAssetData;

public:
	UAkMediaAsset();
};

FORCEINLINE uint32 GetTypeHash(const UAkMediaAsset) { return 0; }
