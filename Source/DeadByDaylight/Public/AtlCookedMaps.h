#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AtlCookedMapDescription.h"
#include "AtlCookedMaps.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAtlCookedMaps : public UPrimaryDataAsset
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FAtlCookedMapDescription> Descriptions;

public:
	UAtlCookedMaps();
};

FORCEINLINE uint32 GetTypeHash(const UAtlCookedMaps) { return 0; }
