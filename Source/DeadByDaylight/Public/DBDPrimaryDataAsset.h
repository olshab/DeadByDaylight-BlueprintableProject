#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "DBDPrimaryDataAsset.generated.h"

UCLASS(Blueprintable, Abstract)
class DEADBYDAYLIGHT_API UDBDPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPrimaryAssetType AssetType;

public:
	UDBDPrimaryDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPrimaryDataAsset) { return 0; }
