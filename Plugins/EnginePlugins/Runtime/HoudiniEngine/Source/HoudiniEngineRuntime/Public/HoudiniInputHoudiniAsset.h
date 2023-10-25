#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputHoudiniAsset.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AssetOutputIndex;

public:
	UHoudiniInputHoudiniAsset();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputHoudiniAsset) { return 0; }
