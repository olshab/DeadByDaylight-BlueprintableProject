#pragma once

#include "CoreMinimal.h"
#include "ECustomMatchOptions.h"
#include "Engine/DataAsset.h"
#include "MatchOptionAssetData.h"
#include "MatchConfigOptionsDataAsset.generated.h"

UCLASS(Blueprintable)
class UMatchConfigOptionsDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ECustomMatchOptions, FMatchOptionAssetData> OptionsData;

public:
	UMatchConfigOptionsDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UMatchConfigOptionsDataAsset) { return 0; }
